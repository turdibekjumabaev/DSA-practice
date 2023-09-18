#include <iostream>
using namespace std;

int main() {
    int a, b, c, V, S;
    cin >> a >> b >> c;
    V = a * b * c;
    S = 2 * (a * b + b * c + a * c);
    cout << V << endl << S << endl;
    
    return 0;
}