//------------------------------
// ShUmarbek
//------------------------------
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int m, k;
    cout << "k=";
    cin >> k;

    double Y = 0;
    int f;

    for (m = 1; m <= k; m++) {
        f = 1;

        for (int j = 1; j <= (3*m); j++)
            f = f * j;

        double ishora = ((2*m) % 2 == 0) ? 1 : -1;

        Y = Y + ishora * pow((pow(m, 2) - 9), 2) / f ;
    }

    cout << "Y=" << Y;

    return 0;
}
