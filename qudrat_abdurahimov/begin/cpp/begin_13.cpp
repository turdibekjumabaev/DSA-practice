#include <iostream>
using namespace std;

int main(){
    int R1, R2;
    cin >> R1 >> R2;
    float S1, S2, S3, PI(3.14);
    S1 = PI * R1;
    S2 = PI * R2;
    S3 = PI * (R1 - R2);
    cout << S1 << endl << S2 << endl << S3 << endl;

    return 0;
}