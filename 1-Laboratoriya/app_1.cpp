#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, z, a, b, f, A, B, C, D, E;
    cout << "x, z, a, b larning qiymatini kiriting:\n";
    cin >> x >> z >> a >> b;

    A = pow(cos(b), 7) * pow(x, 5);
    B = sin(pow(a, 2));
    C = cos(pow(x, 3) + pow(z, 5) - pow(a, 2));
    D = asin(pow(a, 2));
    E = acos(pow(x, 7) - pow(a, 2));
    f = (A - (B + C)) / (D + E);

    cout << "f= " << f;
    
    return 0;
}