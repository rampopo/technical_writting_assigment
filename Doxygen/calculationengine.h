/**
 * @file CalculationEngine.h
 * @brief Defines the CalculationEngine class.
 */

#ifndef CALCULATION_ENGINE_H
#define CALCULATION_ENGINE_H

#include "Logger.h"
#include <cmath>

/**
 * @class CalculationEngine
 * @brief Performs mathematical calculations.
 *
 * @details
 * This class provides mathematical operations and uses
 * a Logger object to display calculation-related messages.
 *
 * @todo Add more mathematical operations in the future.
 */
class CalculationEngine
{
private:
    Logger logger;

public:

    /**
     * @brief Constructs a CalculationEngine object.
     * @param log A Logger object used for logging.
     */
    CalculationEngine(const Logger& log)
        : logger(log)
    {
    }

    /**
     * @brief Calculates the power of a number.
     * @param base The number to be raised to a power.
     * @param exponent The power to which the base is raised.
     * @return The calculated result.
     */
    double power(double base, int exponent) const
    {
        logger.log(LogLevel::INFO, "Calculating power");

        return std::pow(base, exponent);
    }
};

#endif