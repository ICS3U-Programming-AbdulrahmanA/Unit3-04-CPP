// Copyright (c) 2025 Abdul All rights reserved.
//
// Created by: Abdul
// Date: 10/22/2025
// Program to ask the user to enter an integer

#include <cmath>
#include <iostream>

int main() {
    // Ask user for an integer
    int user_integer;
    std::cout << "Please enter an integer: ";
    std::cin >> user_integer;


    // Check if the integer is positive, negative, or zero and display message
    if (user_integer > 0) {
        std::cout << "You entered a positive integer: " << user_integer << std::endl;
    } else if (user_integer < 0) {
        std::cout << "You entered a negative integer: " << user_integer << std::endl;
    } else {
        std::cout << "You entered zero." << std::endl;
    }
}
