/*
 * ConsoleLogger.h
 *
 * Copyright 2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *     http://aws.amazon.com/apache2.0/
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#ifndef ALEXA_CLIENT_SDK_AVS_COMMON_UTILS_INCLUDE_AVS_COMMON_UTILS_LOGGER_CONSOLE_LOGGER_H_
#define ALEXA_CLIENT_SDK_AVS_COMMON_UTILS_INCLUDE_AVS_COMMON_UTILS_LOGGER_CONSOLE_LOGGER_H_

#include "AVSCommon/Utils/Logger/Logger.h"

namespace alexaClientSDK {
namespace avsCommon {
namespace utils {
namespace logger {

/**
 * A very simple (e.g. not asynchronous) @c Logger that logs to console.
 */
class ConsoleLogger : public Logger {
public:
    /**
     * Return the one and only @c ConsoleLogger instance.
     *
     * @return The one and only @c ConsoleLogger instance.
     */
    static Logger& instance();

    void emit(Level level, std::chrono::system_clock::time_point time, const char* threadMoniker, const char* text)
        override;

private:
    /**
     * Constructor.
     */
    ConsoleLogger();
};

/**
 * Return the singleton instance of @c ConsoleLogger.
 *
 * @return The singleton instance of @c ConsoleLogger.
 */
Logger& getConsoleLogger();

}  // namespace logger
}  // namespace utils
}  // namespace avsCommon
}  // namespace alexaClientSDK

#endif  // ALEXA_CLIENT_SDK_AVS_COMMON_UTILS_INCLUDE_AVS_COMMON_UTILS_LOGGER_CONSOLE_LOGGER_H_
