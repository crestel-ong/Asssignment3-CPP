// Copyright (c) Crestel Ong All rights reserved
//
// Created by: Crestel
// Created on: Sep 2021
// This is the greater than program in c++

#include <iostream>

int main() {
    // this function tells you which number is greater
    std::string firstAsString;
    int firstAsInteger;
    std::string secondAsString;
    int secondAsInteger;

    // input
    std::cout << "Enter the first number (integer): ";
    std::cin >> firstAsString;
    std::cout << "Enter the second number (integer): ";
    std::cin >> secondAsString;

    // process and output
    try {
        firstAsInteger = std::stoi(firstAsString);
        secondAsInteger = std::stoi(secondAsString);

        if (firstAsInteger < secondAsInteger) {
            std::cout << "The greater number is " << std::fixed
            << secondAsInteger << "." << std::endl;
        } else {
            std::cout << "The greater number is " << std::fixed
            << firstAsInteger << "." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid input." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
