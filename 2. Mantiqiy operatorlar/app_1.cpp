#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    double x, y, z, a, b, b1, c, G;
    cout << "x, y, z, c larning qiymatlarini ketma-ket kiriting:\n";
    cin >> x >> y >> z >> c;

    a = tan(pow(x, 4) - 6);
    b = pow(cos(z + (pow(x, 3) * y)), 3*x);
    b1 = pow(cos(pow(x, 3) * pow(c, 2)), 2);
    // b1 = pow(cos(pow(x, 3)), 2) * pow(c, 2);
    G = (a - b) / b1;

    cout << "a= " << a;
    cout << "\nb= " << b;
    cout << "\nb1= " << b1;
    cout << setprecision(3) << "\nG= " << G;

    return 0;
}