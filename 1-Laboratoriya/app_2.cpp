#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double m, y, N;
    cout << "m, y larning qiymatini kiriting:\n";
    cin >> m >> y;

    N = (pow(m, 2) + 2.8*m + 0.355) / (cos(2*y) + 3.6);

    cout << "N= " << N;
    
    return 0;
}