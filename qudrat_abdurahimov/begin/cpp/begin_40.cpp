#include <iostream>

using namespace std;

int main(){
    int a1, a2, b1, b2, c1, c2, d;
    float x, y;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

    x = (c1 * b2 - a2 * b1)/d;
    y = (a1 * c2 - a2 * c2)/d;

    cout << x << endl << y << endl;
}