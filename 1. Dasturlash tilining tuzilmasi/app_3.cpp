// Tomonlarni kiritish orqali uchburchak turini aniqlash

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;

    if (((a + b) > c) && ((a + c) > b) && ((b + c) > a)) {
        if (a == b && a == c) {
            cout << "Teng tomonli";
        } else if (a == b || b == c || a== c) {
            cout << "Teng yonli";
        } else{
            cout << "Turli tomonli";
        }
    } else {
        cout << "Uchburchak yasab bo'lmaydi";
    }

    return 0;
}