#include <iostream>

using namespace std;

int main() {
    int a, b, c, acbc;
    cin >> a >> b >> c;
    acbc = (c-a) * (b-c);
    
    cout << acbc << endl;

    return 0;
}