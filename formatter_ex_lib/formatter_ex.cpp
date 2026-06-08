#include "formatter_ex.h"

void formatter_ex(const std::string& message, std::ostream& os) {
    os << formatter(message);
}
