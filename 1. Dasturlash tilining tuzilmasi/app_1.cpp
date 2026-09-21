//----------------------------------------------------------------------------------------
// nuqtaning OX va OY o'qlaridagi kordinatari orqali uning joylashgan choragini aniqlash.
//----------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout << "Koordinatalarni kiriting:\n";
    cout << "x=";
    cin >> x;
    cout << "y=";
    cin >> y;
    cout << "Nuqta ";

    if (x > 0) {
        if (y > 0) {
            cout << "I-chorak";
        } else {
            cout << "IV-chorak";
        }
    } else {
        if (y > 0) {
            cout << "II-chorak";
        } else {
            cout << "III-chorak";
        }
    }

    cout << "da joylashgan!";

    return 0;
}