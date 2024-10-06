#ifndef COLOR_H
#define COLOR_H

//Mod Lab 16

class Color {
private:
    int redValue;
    int greenValue;
    int blueValue;

public:
    // Default constructor
    Color();

    // Parameter constructor
    Color(int r, int g, int b);

    // Partial constructor
    Color(int r, int g);

    // Set member functions
    void setRedValue(int r);
    void setGreenValue(int g);
    void setBlueValue(int b);

    // Get member functions
    int getRedValue() const;
    int getGreenValue() const;
    int getBlueValue() const;

    // Print method
    void displayColor() const;
};

#endif  // COLOR_H