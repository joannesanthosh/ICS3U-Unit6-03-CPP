// Copyright (c) 2022 Joanne Santhosh
//
// Created by: Joanne Santhosh
// Created on: Dec 2022
// This program finds the smallest number in an array

#include <time.h>

#include <array>
#include <iostream>
#include <random>

template <size_t N>
int findSmallestNumber(std::array<int, N> listOfNumbers) {
    // This function finds the smallest number
    int smallestNumber = listOfNumbers[0];

    for (int singleRandomNumber : listOfNumbers) {
        if (singleRandomNumber < smallestNumber) {
            smallestNumber = singleRandomNumber;
        }
    }
    return smallestNumber;
}

int main() {
    std::array<int, 10> randomNumbers;
    int singleRandomNumber;
    int smallestNumber;

    std::cout << "Here is a list of 10 random numbers: " << std::endl;
    std::cout << "" << std::endl;

    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 100);
    for (int counter = 0; counter < 10; counter++) {
        singleRandomNumber = idist(rgen);
        randomNumbers[counter] = singleRandomNumber;
        std::cout << "The random number " << counter + 1 << " is: "
                  << singleRandomNumber << std::endl;
    }
    // calls function
    smallestNumber = findSmallestNumber(randomNumbers);
    std::cout << "" << std::endl;
    std::cout << "The smallest number is " << smallestNumber << std::endl;

    std::cout << "\nDone." << std::endl;
}
