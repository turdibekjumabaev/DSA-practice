#include <iostream>
using namespace std;

int main(){
    float pi = 2.1415, L, S;
    int R;
    cin >> R;
    L = 2*pi*R;
    S = pi*R*R;
    cout << L << endl << S << endl;

    return 0;
}