
/**
 * @file Logger.h
 * @brief Defines the Logger class and logging levels.
 *
 * This file provides functionality to display
 * informational, warning, and error messages.
 */

#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <string>

/**
 * @enum LogLevel
 * @brief Defines the different levels of logging.
 */
enum class LogLevel
{
    INFO,       ///< Informational messages
    WARNING,    ///< Warning messages
    ERROR       ///< Error messages
};

/**
 * @class Logger
 * @brief Provides logging functionality.
 *
 * The Logger class displays messages with their
 * corresponding logging levels and component name.
 */
class Logger
{
private:
    std::string name;

public:

    /**
     * @brief Constructs a Logger object.
     * @param loggerName Name of the component using the logger.
     */
    Logger(const std::string& loggerName)
        : name(loggerName)
    {
    }

    /**
     * @brief Displays a log message.
     * @param level The severity level of the message.
     * @param message The message to be displayed.
     */
    void log(LogLevel level, const std::string& message) const
    {
        std::string levelName;

        switch (level)
        {
            case LogLevel::INFO:
                levelName = "INFO";
                break;

            case LogLevel::WARNING:
                levelName = "WARNING";
                break;

            case LogLevel::ERROR:
                levelName = "ERROR";
                break;
        }

        std::cout << "[" << levelName << "] "
                  << name << ": "
                  << message << std::endl;
    }
};

#endif
