#include <iostream>
#include <fstream>
#include <string>

#include "formatter_ex.h"
#include "solver.h"

int main() {
    float a, b, c;
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    std::cout << "c = ";
    std::cin >> c;

    float x = solver(a, b, c);

    std::string result = "x = " + std::to_string(x);
    formatter_ex(result, std::cout);

    std::ofstream file("result.txt");
    formatter_ex(result, file);
    file.close();

    return 0;
}
