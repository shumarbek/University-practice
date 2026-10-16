
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int i, k;
    cin >> k;

    double S = 0;
    int f;

    for (i = 1; i <= k; i++) {
        f = 1;

        for (int j = 1; j <= (i + 2); j++)
            f = f * j;

        double ishora = (i % 2 == 0) ? 1 : -1;

        S = S + ishora * (pow(i, 3) - 27) / (3 * f);
    }

    cout << "S=" << S;

    return 0;
}
