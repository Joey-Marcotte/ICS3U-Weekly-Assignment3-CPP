// Copyright (c) 2019 Joey Marcotte All rights reserved.
//
// Created by: Joey Marcotte
// Created on: October 2019
// This program shows which number is greater
// with user input

#include <iostream>
#include <cstdlib>
#include <string>

int main() {
    std::string first_number_as_string;
    int first_number_as_number;
    std::string second_number_as_string;
    int second_number_as_number;


    while (true) {
        // input
        std::cout << "Input a number: ";
        std::cin >> first_number_as_string;
        std::cout << "Input another number: ";
        std::cin >> second_number_as_string;
        try {
            first_number_as_number = std::stoi(first_number_as_string);
            second_number_as_number = std::stoi(second_number_as_string);
            if (first_number_as_number > second_number_as_number) {
                std::cout << "" << first_number_as_number
                << " is the greater number" << std::endl;
                break;
            } else if (second_number_as_number > first_number_as_number) {
                std::cout << "" << second_number_as_number
                << " is the greater number" << std::endl;
                break;
            } else {
                std::cout << "Numbers are equal" << std::endl;
                break;
            }
        } catch (std::invalid_argument) {
            std::cout << "Not a valid number inputted" << std::endl;
        }
    }
}
