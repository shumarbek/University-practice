#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double x, y, a, b, c;
    cout << "x=";
    cin >> x;
    
    a = pow(x - 2, 2);
    b = pow(x + 2, 2);
    c = pow(x, 2) + 1;
    y = sqrt(a + b) / c;

    cout << setprecision(2) << "y=" << y;

    return 0;
}