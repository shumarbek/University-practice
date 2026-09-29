#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a=6, b=4, alpha=M_PI/4, c, P, R, S, r, beta, gamma;
    
    c = sqrt(pow(a, 2) + pow(b, 2) - 2*a*b*cos(alpha));
    P = a + b + c;
    R = a / (2 * sin(alpha));
    S = 0.5 * a * b * sin(alpha);
    r = 2*S / P;
    beta = asin((b*sin(alpha)) / a);
    gamma = M_PI - (alpha + beta);

    cout << "3-tomon(c): " << c;
    cout << "\nPerimetr(P): " << P;
    cout << "\nTashqi aylana radiusi(R): " << R;
    cout << "\nYuzi(S): " << S;
    cout << "\nIchki aylana radiusi(r): " << r;
    cout << "\nBeta ni topish: " << beta;
    cout << "\nGamma: " << gamma;

    return 0;
}