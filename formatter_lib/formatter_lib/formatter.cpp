#include "formatter.h"

std::string formatter(const std::string& message) {
    std::string result = "-------------------------\n";
    result += message + "\n";
    result += "-------------------------\n";
    return result;
}

