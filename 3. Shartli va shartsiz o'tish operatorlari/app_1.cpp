//------------------------------------------------------------------------
// if (ball >= 90) 5 ; ball >=70 4; ball >=60 3; ball < 60 qoniqarsiz;
//-------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int ball;
    cout << "Ball'ni kiriting: ";
    cin >> ball;
    cout << "Natija: ";

    if (ball <= 100 && ball >= 0) {
        if (ball >= 90) {
            cout << 5;
        } else if (ball < 90 && ball >= 70) {
            cout << 4;
        } else if (ball < 70 && ball >= 60) {
            cout << 3;
        } else {
            cout << "2 (qoniqarsiz)";
        }
    } else {
        cout << "Ball xato kiritildi!";
    }

    return 0;
}