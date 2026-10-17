#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int k;
    double P=1;
    cout << "k=";
    cin >> k;

    for (int j = 1; j <= k; j++) {
        if (j == 3) {
            continue;
        }

        double x = 0, y;

        for (int i = j; i <= 12; i++) {
            if (i == 11) {
                continue;
            }

            x += pow(i + 5, 1.0/3.0) / (i - 11);
        }

        y = 1.0 *  ((j - 6)*j) / (j-3);
        P *= y * x;

    }

    if (k < 1) {
        cout << "k>1 bo'lishi shart!";
    } else {
        cout << fixed << setprecision(2) << "P=" << P;
    }

    return 0;
}