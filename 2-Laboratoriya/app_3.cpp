#include <iostream>
using namespace std;

int main () {
    int kod, hajm;
    cout << "Xizmat turini tanlang:\n1-suv\n2-gaz\n3-elektr energiyasi\n--> tanlov: ";
    cin >> kod;
    cout << "Iste'mol hajmi: ";
    cin >> hajm;

    switch(kod) {
        case 1:
            cout << "Suv uchun to'lov: " << hajm*1500;
            break;
        case 2:
            cout << "Gaz uchun to'lov: " << hajm*2000;
            break;
        case 3:
            cout << "Elektr energiyasi uchun to'lov: " << hajm*3000;
            break;
        default:
            cout << "Iste'mol hajmi noto'g'ri kiritildi!";
    }

    return 0;
}