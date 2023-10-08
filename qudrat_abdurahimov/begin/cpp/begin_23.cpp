#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int d = a, e = c;
    a = b;
    c = d;
    b = e;
    cout << a << endl << b << endl << c << endl;
}