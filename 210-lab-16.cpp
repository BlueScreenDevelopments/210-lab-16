#include "Color.h"
#include "Color.cpp">
#include <iostream>

// Mod 16 Lab

int main() {
    Color color1;  // Default constructor
    color1.displayColor();

    Color color2(255, 0, 0);  // Parameter constructor
    color2.displayColor();

    Color color3(255, 255);  // Partial constructor
    color3.displayColor();

    Color color4(0, 255, 0);  // Parameter constructor
    color4.displayColor();

    return 0;
}