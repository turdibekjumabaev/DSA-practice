#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int S;
    cin >> S;
    float PI(3.14), R, D;
    R = sqrt((S / PI));
    D = 2 * R;

    cout << R << endl << D << endl;

    return 0;
}