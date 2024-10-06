#include "Color.h"
using namespace std;
//Mod Lab 16

// Default constructor
Color::Color() : redValue(0), greenValue(0), blueValue(0) {}

// Parameter constructor
Color::Color(int r, int g, int b) : redValue(r), greenValue(g), blueValue(b) {}

// Partial constructor
Color::Color(int r, int g) : redValue(r), greenValue(g), blueValue(0) {}

void Color::setRedValue(int r) {
    redValue = r;
}

void Color::setGreenValue(int g) {
    greenValue = g;
}

void Color::setBlueValue(int b) {
    blueValue = b;
}

int Color::getRedValue() const {
    return redValue;
}

int Color::getGreenValue() const {
    return greenValue;
}

int Color::getBlueValue() const {
    return blueValue;
}

void Color::displayColor() const {
    cout << "Red: " << redValue << ", Green: " << greenValue << ", Blue: " << blueValue << endl;
}