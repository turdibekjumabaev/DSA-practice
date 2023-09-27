#include <iostream>
using namespace std;

int main() {
    int L;
    cin >> L;
    float PI(3.14), R(L/PI), S(PI * R * R);
    cout << R << endl << S << endl;

    return 0;
}