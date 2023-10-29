#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    bool result = a % 2 == 1 && b % 2 == 1;
    cout << result << endl;
}