//-------------------------------------------------------------------
// 2ta son bilan hisob amallarini qilish
//-------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    float a, b, n, m;
    cout << "Sonlarni kiriting:\n";
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "\nAmal turini tanlang:\n1.Qo'shish(+)\n2.Ayirish(-)\n3.Ko'paytirish(*)\n4.Bo'lish(/)\nTanlandi: ";
    cin >> n;
    cout << "--> Natija:";

    if (n == 1) {
        m = a + b;
    } else if (n == 2) {
        m = a - b;
    } else if (n == 3) {
        m = a * b;
    } else if (n == 4) {
        m = a / b;
    } else {
        cout << "Mavjud bo'lmagan amal indeksi tanlandi, kodni qayta ishga tushiring!";
    }

    cout << m;

    return 0;
}