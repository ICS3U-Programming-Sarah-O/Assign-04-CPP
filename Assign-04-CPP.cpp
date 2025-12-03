// Copyright (c) Year Your Name All rights reserved.
// Created by: Sarah OUAMOU
// Date: 12 03, 2025
// this code estimates the probability of rolling doubles on dice rolling.

#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
    std::cout << "Welcome to Sarah's dice simulator!" << std::endl;

    std::srand(static_cast<unsigned>(std::time(nullptr)));

    int rolls = 0;
    int die1 = 0;
    int die2 = 0;

    // Roll until doubles
    while (true) {
        die1 = (std::rand() % 6) + 1;
        die2 = (std::rand() % 6) + 1;
        rolls++;

        std::cout << "Roll " << rolls << ": Die 1 = "
                  << die1 << ", Die 2 = " << die2 << std::endl;

        if (die1 == die2) {
            std::cout << "Doubles achieved in " << rolls << " rolls!"
                      << std::endl;
            break;
        }
    }

    int total_rolls_to_doubles = rolls;
    int doubles_count = 0;
    const int kNumSimulations = 10;

    std::cout << "\n--- Calculating Percentage Chance of Rolling Doubles over "
              << kNumSimulations << " simulations ---" << std::endl;

    // Run simulations
    for (int i = 0; i < kNumSimulations; i++) {
        die1 = (std::rand() % 6) + 1;
        die2 = (std::rand() % 6) + 1;

        if (die1 == die2) {
            doubles_count++;
        }
    }

    double percentage_doubles =
        (static_cast<double>(doubles_count) / kNumSimulations) * 100.0;

    std::cout << "Out of " << kNumSimulations
              << " individual rolls, doubles occurred "
              << doubles_count << " times." << std::endl;

    std::cout << "Percentage chance of rolling doubles: "
<< percentage_doubles << "%" << std::endl;

    return total_rolls_to_doubles;
}
