#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

// this will throw an error if you don't have the bitmap library installed
// so be sure to do that before uncommenting this #include line
#include "bitmap_image.hpp"

int main(int argc, char *argv[]) {
    // get a string containing the image name
    // this is necessary because the bitmap_image
    // class expects a string as an argument
    std::string file_name(argv[1]);
    std::string output_file_name(argv[2]);

    auto image = bitmap_image(file_name);

    image.convert_to_grayscale();

    const std::size_t height = image.height();
    const std::size_t width = image.width();
    const std::size_t total_pixels = height * width;

    std::size_t total_red = 0;

    // use R value of each pixel to calculate mean brightness of image
    // G or B would work too since the image is grayscale
    for (std::size_t x = 0; x < width; x++) {
        for (std::size_t y = 0; y < height; y++) {
            rgb_t color;
            image.get_pixel(x, y, color);
            total_red += color.red;
        }
    }

    const std::size_t mean_brightness = total_red / total_pixels;

    const rgb_t black = make_colour(0, 0, 0);
    const rgb_t white = make_colour(255, 255, 255);

    // if pixel is darker than mean brightness, set it to black
    // otherwise, set it to white
    for (std::size_t y = 0; y < height; y++) {
        for (std::size_t x = 0; x < width; x++) {
            rgb_t color;
            image.get_pixel(x, y, color);

            if (color.red < mean_brightness) {
                image.set_pixel(x, y, black);
            } else {
                image.set_pixel(x, y, white);
            }
        }
    }

    image.save_image(output_file_name);

    return 0;
}
