#include <iostream>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c;
    d = a;
    a = c;
    c = b;
    b = d;

    cout << a << endl << b << endl << c << endl;
}