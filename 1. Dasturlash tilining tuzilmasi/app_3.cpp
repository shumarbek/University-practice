//------------------------------------------------------------
// Tomonlarni kiritish orqali uchburchak turini aniqlash
//------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Uchburchak tomonlarini kiriting:\n";
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;
    cout << "Yakuniy tahlil:\n";

    if (((a + b) > c) && ((a + c) > b) && ((b + c) > a)) {
        cout << "1.Tomoniga ko'ra: ";
        if (a == b && a == c) {
            cout << "Teng tomonli";
        } else if (a == b || b == c || a == c) {
            cout << "Teng yonli";
        } else{
            cout << "Turli tomonli";
        }

        cout << "\n2.Burchagiga ko'ra: ";
        if ((a*a + b*b > c*c) && (a*a + c*c > b*b) && (c*c + b*b > a*a)) {
            cout << "O'tkir burchakli";
        } else if ((a*a + b*b < c*c) || (a*a + c*c < b*b) || (c*c + b*b < a*a)) {
            cout << "O'tmas burchakli";
        } else if ((a*a + b*b == c*c) || (a*a + c*c == b*b) || (c*c + b*b == a*a)) {
            cout << "To'g'ri burchakli";
        }
    } else {
        cout << "Uchburchak yasab bo'lmaydi";
    }

    return 0;
}