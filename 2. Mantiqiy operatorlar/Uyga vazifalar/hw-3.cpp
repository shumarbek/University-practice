#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    float x, y, a, b, c;
    cout << "x=";
    cin >> x;
    
    a = sqrt(pow(x, 2) + 4*x + 4);
    b = sqrt(pow(x, 2) - 4*x + 4);
    c = pow(x, 2) + 1;
    y = (a + b) / c;

    cout << setprecision(2) << "y=" << y;

    return 0;
}