#include <iostream>
#include <cmath>

int main() {
    double S;
    const double PI = 3.14;

    std::cin >> S;

    double R = sqrt(S / PI);
    double D = 2 * R;

    std::cout << "R = " << R << std::endl;
    std::cout << "D = " << D << std::endl;

    return 0;
}
