// nuqtaning OX va OY o'qlaridagi kordinatari orqali uning joylashgan choragini aniqlash.

#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "x=";
    cin >> x;
    cout << "y=";
    cin >> y;
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

    return 0;
}