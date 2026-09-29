#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double m, y, A, B, N;
    cout << "m, y larning qiymatini kiriting:\n";
    cin >> m >> y;
    
    A = pow(m, 2) + 2.8*m + 0.355;
    B= cos(2*y) + 3.6;
    N = A / B;

    cout << "N= " << N;
    
    return 0;
}