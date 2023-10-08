#include <iostream>

using namespace std;

int main(){
    int v1, v2, t, s, s1;
    cin >> v1 >> v2 >> t >> s;
    s1 = s - (v1 + v2) * t;

    cout << s << endl;
}