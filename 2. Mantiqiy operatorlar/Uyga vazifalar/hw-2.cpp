#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    float x, y, a, b, c;
    cout << "x=";
    cin >> x;
    // x = M_PI / 4;
    
    a = pow(sin(x), 2);
    b = pow(cos(x), 2);
    c = pow(tan(x), 2);
    y = (a + b) / (1 + c);

    cout << setprecision(2) << "y=" << y;

    return 0;
}