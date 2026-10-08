//-------------------------------------------------------------------
// Haftalik dars jadvali
//-------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int x;
    bool y;
    cout << "Hafta kunining tartib raqamini kiriting: ";
    cin >> x;
    cout << "Hozr juft haftami yoki toq?\nToq[0] / Juft[1] | ";
    cin >> y;

    switch (x) {
        case 1:
            cout << "\n------>> Dushanba <<------";
            cout << "\n08:00-09:20 | Ingliz tili [umumiy]";
            cout << "\n09:30-10:50 | Dasturlash [ma'ruza]";
            break;
        case 2:
            cout << "\n------>> Seshanba <<------";
            cout << "\n08:00-09:20 | Hisob [ma'ruza]";

            if (y) {
                cout << "\n09:30-10:50 | Falsafa [amaliyot]";
            } else {
                cout << "\n09:30-10:50 | Dasturlash [amaliyot]";
            }
            break;
        case 3:
            cout << "\n----->> Chorshanba <<-----";
            cout << "\n08:00-09:20 | Ingliz tili [umumiy]";

            if (y) {
                cout << "\n09:30-10:50 | Fizika [amaliyot]";
            } else {
                cout << "\n09:30-10:50 | Fizika [laboratoriya]";
                cout << "\n11:00-12:20 | Dinshunoslik [amaliyot]";
            }
            
            break;
        case 4:
            cout << "\n----->> Payshanba <<-----";
            cout << "\n08:00-09:20 | Hisob [amaliyot]";
            cout << "\n09:30-10:50 | Falsafa [ma'ruza]";
            cout << "\n11:00-12:20 | Fizika [ma'ruza]";
            break;
        case 5:
            cout << "\n------->> Juma <<-------";
            cout << "\n08:00-09:20 | Dasturlash [amaliyot]";
            cout << "\n09:30-10:50 | Dinshunoslik [ma'ruza]";

            if (y) {
                cout << "\n11:00-12:20 | Hisob [ma'ruza]";
            } else {
                cout << "\n11:00-12:20 | Fizika [ma'ruza]";
            }
            break;
        case 6:
        case 7:
            cout << "\n+-+-+-+-+-+-+-+-+-+-+-+-+";
            cout << "\nShanba va Yakshanba kunlari darslar mavjud emas!";
            break;
        default:
            cout << "\n+-+-+-+-+-+-+-+-+-+-+-+-+";
            cout << "\nHafta kunining tartib raqami xato kiritildi!";
    }
    cout << "\n-------------------------";

    return 0;
}