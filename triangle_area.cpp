// Copyright (c) Joseph Palermo All rights reserved.
//
// Created by: Joseph Palermo
// Created on: November 2019
// This program uses user-defined functions

#include <iostream>
#include <iomanip>


void CalculateArea(float base, float height) {
    // this function calculates area 
    float area;

    // process
    area = (base * height) / 2;

    // output
    std::cout << "" << std::endl;
    std::cout << "The area is " << std::fixed << std::setprecision(2) \
    << area << std::setfill('0') << "cm²";
}


main() {
    // this function gets base and height and calls functions

    float baseFromUser;
    float heightFromUser;
    std::string baseAsString;
    std::string heightAsString;

    // input
    std::cout << "Enter the base of a triangle (cm): ";
    std::cin >> baseAsString;
    std::cout << "Enter the height of a triangle (cm): ";
    std::cin >> heightAsString;

    try {
        baseFromUser = std::stoi(baseAsString);
        heightFromUser = std::stoi(heightAsString);
        CalculateArea(baseFromUser, heightFromUser);
    } catch (std::invalid_argument) {
        std::cout << "" << std::endl;
        std::cout << "Please insert a valid number." << std::endl;
    }
}
