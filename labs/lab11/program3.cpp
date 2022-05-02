#include "bitmap/bitmap_image.hpp"

int main()
{
   bitmap_image image(200,200);

   // set background to pinkish
   image.set_all_channels(255, 50, 50);

   image_drawer draw(image);

   draw.pen_width(3);
   draw.pen_color(45, 150, 220);
   draw.circle(image.width() / 1.5, image.height() / 1.5, 25);

   draw.pen_width(1);
   draw.pen_color(100, 255, 10);
   draw.rectangle(0, 37, 200, 64);

   image.save_image("output.bmp");

   return 0;
}
