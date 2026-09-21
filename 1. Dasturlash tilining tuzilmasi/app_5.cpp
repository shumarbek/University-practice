//--------------------------------------------------------------------------
// Mini bankamat
//--------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int PIN;
    int x, y;

    // data
    int correctPIN = 1234;
    int balance = 1000000;

    cout << "PIN kodni kiriting:\n--> ";
    cin >> PIN;
    
    if (PIN == correctPIN) {
        cout << "\n===== MINI BANKOMAT =====\n1. Balansni ko'rish\n2. Pul yechish\n3. Pul qo'yish\n4. Chiqish\n\nTanlang: ";
        cin >> x;

        if (x == 1) {
            cout << "\nSizda hozr mavjud: $" << balance;
        } else if (x == 2) {
            cout << "\nSizda hozr mavjud: $" << balance;
            cout << "\nQancha pul yechasiz: ";
            cin >> y;

            if (balance >= y) {
                cout << "Mablag' yechildi!\nHozrda mavjud balance: $" << balance - y;
            } else {
                cout << "Balans yetarli emas!";
            }
        } else if (x == 3) {
            cout << "\nSizda hozr mavjud: $" << balance;
            cout << "\nQancha pul qo'shmoqchisiz: ";
            cin >> y;

            if (y > 0) {
                cout << "Mablag' qo'shildi!\nHozrda mavjud balance: $" << balance + y;
            } else {
                cout << "\nQiymat noto'g'ri kiritildi!";
            }
        } else if (x == 4) {
            cout << "Dastur tugadi. Xayr!";
        }
    } else {
        cout << "Noto'g'ri PIN!";
    }
}