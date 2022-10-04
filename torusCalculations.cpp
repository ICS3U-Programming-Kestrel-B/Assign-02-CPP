// Copyright (c) 2022 KestrelBryce All rights reserved
//
// Created by KestrelBryce
// Date: Oct. 4, 2022
// This program calculates the cost
// of a pizza with diameter

#include <cmath>
#include <iostream>

int main() {
    // Declaring variables
    float tube_rad;
    float rad_of_rev;
    float volume;
    float surface_area;

    // Input
    std::cout << "This program calculates the volume\n";
    std::cout << "and surface area of a torus.\n";
    std::cout << "\n";
    std::cout << "Note: the tube radius cannot be larger than\n";
    std::cout << "the radius of revolution, as that would result\n";
    std::cout << "in an impossible shape.\n";
    std::cout << "\n";

    // getting tube_rad
    std::cout << "Enter the tube radius in inches: ";
    std::cin >> tube_rad;

    // getting rad_of_rev
    std::cout << "Enter the radius of revolution in inches: ";
    std::cin >> rad_of_rev;

    // Process
    // calculating volume
    volume = M_PI * M_PI * 2 * (tube_rad * tube_rad) * rad_of_rev;

    // calculating surface_area
    surface_area = M_PI * M_PI * 4 * tube_rad * rad_of_rev;

    // Output
    std::cout << "\n";
    std::cout << "Your volume is " << volume << " inches^3\n";
    std::cout << "Your surface area is " << surface_area << " inches^2\n";
}
