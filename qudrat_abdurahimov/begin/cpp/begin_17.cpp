#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a, b, c, ac, bc, acbc;
    cin >> a >> b >> c;
    ac = abs(a-c);
    bc = abs(b-c);
    acbc = ac + bc;
    cout << ac << endl << bc << endl << acbc << endl;

    return 0;
}