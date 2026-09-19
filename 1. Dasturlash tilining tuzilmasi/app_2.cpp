//--------------------------------------------------------------------------
// Oy'ning tartib raqamiga ko'ra uning qaysi faslga tegisliligini aniqlash
//--------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Oy raqamini kiriting:";
    cin >> n;

    if (1 <= n && n <= 2 || n == 12) {
        cout << "Qish fasli";
    } else if (3 <= n && n <= 5) {
        cout << "Bahor fasli";
    } else if (6 <= n && n <= 8) {
        cout << "Yoz fasli";
    } else if (9 <= n && n <= 11) {
        cout << "Kuz fasli";
    } else {
        cout << "Xato kiritildi!";
    }

    return 0;
}