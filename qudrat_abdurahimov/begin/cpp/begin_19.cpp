#include <iostream>
using namespace std;

int main() {
    int x1, x2, y1, y2, a, b, P, S;
    cin >> x1 >> x2 >> y1 >> y2;
    a = abs(x1 - x2);
    b = abs(y1 - y2);
    P = 2 * (a + b);
    S = a * b;
    cout << P << endl << S << endl;

    return 0;
}