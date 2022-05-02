class Car {
   private:
    std::string make;
    std::string model;
    std::string color;
    int year;
    double mileage;

   public:
    Car(std::string make, std::string model, std::string color, int year,
        double mileage)
        : make(make),
          model(model),
          color(color),
          year(year),
          mileage(mileage) {}

    std::string getMake() { return make; }
    std::string getModel() { return model; }
    std::string getColor() { return color; }
    int getYear() { return year; }
    double getMileage() { return mileage; }

    void setMake(std::string someMake) { make = someMake; }
    void setModel(std::string someModel) { model = someModel; }
    void setColor(std::string someColor) { color = someColor; }
    void setYear(int someYear) { year = someYear; }
    void setMileage(double someMileage) { mileage = someMileage; }

    void printDetails() {
        std::cout << "Make: " << make << '\n'
                  << "Model: " << model << '\n'
                  << "Color: " << color << '\n'
                  << "Year: " << year << '\n'
                  << "Mileage: " << mileage << '\n';
    }
};
