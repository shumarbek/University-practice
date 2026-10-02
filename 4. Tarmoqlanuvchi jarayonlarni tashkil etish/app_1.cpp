//-------------------------------------------------------------------
// ixtiyoriy hafat kuning raqamini kitirganda uning dam olish kuni yoki ish kuni ekanini aniqlaydigan dastur tuzish
//-----------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int kun;
    cin >> kun;

    switch (kun) {
        case 1: case 2: case 3: case 4: case 5: cout << "Ish kuni";
        break;
        case 6: case 7: cout << "Dam olish";
        break;
    }

    return 0;
}