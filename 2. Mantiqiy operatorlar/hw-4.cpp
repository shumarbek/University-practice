#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    float x, y, z, a, b, c;
    // cout << "x, z =>";
    // cin >> x >> z;
    x = M_PI / 4;
    z = 4;
    
    a = sqrt(pow(x, 2) + pow(z, 2));
    b = pow(x - z, 2) / (x + z);
    c = 1 + pow(tan(x), 2);
    y = (a + b) / c;

    cout << setprecision(2) << "y=" << y;

    return 0;
}