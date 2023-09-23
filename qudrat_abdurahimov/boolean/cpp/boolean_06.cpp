#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    bool result;
    cin >> A >> B >> C;
    result = A <= B && B <= C;
    cout << result << endl;

    return 0;
}