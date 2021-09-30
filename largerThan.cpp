// Copyright (c) 2021 Trent Hodgins All rights reserved

// Created by Trent Hodgins
// Created on 09/30/2021
// This is the Larger Than program
// The user enters in two numbers
// The program tells the user which number is larger


#include <iostream>

int main() {
    // this function checks what number is larger
    int firstNumberAsInt;
    int secondNumberAsInt;
    std::string firstNumber;
    std::string secondNumber;

    // input
    std::cout << "Enter in a integer: ";
    std::cin >> firstNumber;
    std::cout << "Enter in a second integer: ";
    std::cin >> secondNumber;
    std::cout << "" << std::endl;

    // process and output
    try {
        // convert string to int
        firstNumberAsInt = std::stoi(firstNumber);
        secondNumberAsInt = std::stoi(secondNumber);

        if (firstNumberAsInt > secondNumberAsInt) {
            std::cout << firstNumber << " is larger than "
                      << secondNumber << std::endl;
        } else if (firstNumberAsInt < secondNumberAsInt) {
            std::cout << secondNumber << " is larger than "
                      << firstNumber << std::endl;
        } else if (firstNumberAsInt == secondNumberAsInt) {
            std::cout << "Both numbers are equal" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "You didn’t enter in an integer" << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
