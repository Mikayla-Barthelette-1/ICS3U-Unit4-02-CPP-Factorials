// Copyright (c) 2021 Mikayla Barthelette All rights reserved
//
// Created by: Mikayla Barthelette
// Created on: Sept 2021
// This program will show the factorial of a positive integer

#include <iostream>
#include <string>


int main() {
    // this function calculates the factorial

    int loopCounter = 1;
    int theProduct = 1;
    int positiveInteger;
    std::string userInput;


    // input
    std::cout << "Enter a positive integer: ";
    std::cin >> userInput;

    // process
    try {
        positiveInteger = std::stoi(userInput);
        do {
            theProduct = theProduct * loopCounter;
            loopCounter = loopCounter + 1;
        } while (loopCounter <= positiveInteger);
        std::cout << positiveInteger << "! = " << theProduct << ".";
    } catch (std::invalid_argument) {
        std::cout << userInput << " is not a positive number.";
    }

    // output
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::ends;
}
