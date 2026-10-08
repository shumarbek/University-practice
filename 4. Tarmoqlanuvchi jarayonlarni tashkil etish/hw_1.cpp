//-------------------------------------------------------------------
// Oyning qaysi faslga tegishliligini aniqlash
//-------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int oy;
    cout << "Oy raqamini kiriting: ";
    cin >> oy;

    switch (oy) {
        case 12:
        case 1:
        case 2:
            cout << "Qish";
            break;
        case 3:
        case 4:
        case 5:
            cout << "Bahor";
            break;
        case 6:
        case 7:
        case 8:
            cout << "Yosh";
            break;
        case 9:
        case 10:
        case 11:
            cout << "Kuz";
            break;
        default:
            cout << "Oy tartib raqami xato kiritildi!";
    }

    return 0;
}