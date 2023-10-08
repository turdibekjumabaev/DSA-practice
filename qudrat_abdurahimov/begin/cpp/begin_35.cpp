#include <iostream>

using namespace std;

int main(){
    int v, u, t1, t2, s;
    cin >> v >> u >> t1 >> t2;
    s = (v + u) * t1 + (v - u) * t2;
    cout << s << endl;
}