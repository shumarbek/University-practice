#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double x, y, z;
    cout << "x=";
    cin >> x;

    if (-1 <= x && x <= 1) {
        z = asin(pow(x, 3));    // 1-variant
        // z = pow(acos(x), 2);    // 2-variant
        // z = tan(x);             // 3-variant

        if (z > -0.5) {
            y = pow((2*z + 1), 2) / (3.71 - pow(x, 2));
        } else if (-0.5 <= z && z <= pow(10, -3)) {
            y = pow(sin(z), 3) - sin(z / (3 * M_PI));
        } else if (z > pow(10, -3)) {
            y = (tan(z + x) - exp(x)) / (3.5 * x);
        }

        cout << fixed << setprecision(2) << "y=" << y;
    } else {
        cout << "shartga ko'ra [-1 <= x <= 1] bo'lishi kerak";
    }

    return 0;
}