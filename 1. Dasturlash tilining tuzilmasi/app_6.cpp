//--------------------------------------------------
// Talaba baholash tizimi
//--------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    string name, result;
    int a, b, c, x;
    
    cout << "Talaba ismi: ";
    cin >> name;
    cout << "Matematika bali: ";
    cin >> a;
    cout << "Fizika bali: ";
    cin >> b;
    cout << "Dasturlash bali: ";
    cin >> c;

    if (a < 0) {
        a = 0;
    } else if (a > 100) {
        a = 100;
    }
    if (b < 0) {
        b = 0;
    } else if (b > 100) {
        b = 100;
    }
    if (c < 0) {
        c = 0;
    } else if (c > 100) {
        c = 100;
    }

    cout << "\n===== TALABA BAHOLASH TIZIMI =====";
    cout << "\nTalaba ismi:" << name;
    cout << "\nMatematika bali: " << a;
    cout << "\nFizika bali: " << b;
    cout << "\nDasturlash bali: " << c;

    x = (a + b + c) / 3;

    if (90 <= x && x <= 100) {
        result = "A'lo";
    } else if (80 <= x && x < 90) {
        result = "Yaxshi";
    } else if (70 <= x && x < 80) {
        result = "Qoniqarli";
    } else if (60 <= x && x < 70) {
        result = "O'tgan";
    } else if (0 <= x && x < 60) {
        result = "Yiqilgan";
    }

    cout << "\n\n| " << name << "\n| O'rtacha ball: " << x << "\n| Natija: " << result;

    return 0;
}