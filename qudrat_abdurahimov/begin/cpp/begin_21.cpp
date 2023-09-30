#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3;
    
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    cin >> x3;
    cin >> y3;
    
    double a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    double b = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    double c = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    double p = (a + b + c) / 2;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));
    double P = p * 2;

    cout << "S = " << S << std::endl;
    cout << "P = " << P << std::endl;
    
    return 0;
}
