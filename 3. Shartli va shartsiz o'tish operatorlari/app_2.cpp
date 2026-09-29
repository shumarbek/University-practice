//----------------------------------------------------------------------
// Ternar operatori
//----------------------------------------------------------------------

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, z;
    cout << "a, b larni kiriting: ";
    cin >> a >> b;

    z = (a > b) ? pow(a, 3) + b : b - a;
    cout << z;

    return 0;
}