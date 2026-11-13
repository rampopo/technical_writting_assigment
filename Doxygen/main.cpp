/**
 * @file main.cpp
 * @brief Entry point of the calculation application.
 *
 * This program demonstrates the use of Logger
 * and CalculationEngine classes.
 */

/**
 * @mainpage Calculation Engine Documentation
 *
 * @section intro Introduction
 * This project demonstrates a simple C++ calculation
 * engine with logging functionality.
 *
 * @section features Features
 * - Displays informational log messages.
 * - Calculates the power of a number.
 * - Uses Doxygen comments for documentation.
 */

#include "Logger.h"
#include "CalculationEngine.h"
#include <iostream>

int main()
{
    Logger logger("Main");
    CalculationEngine engine(logger);

    double result = engine.power(2, 3);

    std::cout << "Result: " << result << std::endl;

    return 0;
}