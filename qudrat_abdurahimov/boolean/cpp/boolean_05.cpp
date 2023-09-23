#include <iostream>
using namespace std;

int main() {
    int A, B;
    bool result;
    cin >> A >> B;
    result = A >= 0 || B < -2;
    cout << result << endl;

    return 0;
}