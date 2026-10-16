// 0 gacha ishlatish
#include <iostream>
using namespace std;

int main() {
    int N, i=1, Xsum=0, Ysum=0;

    while(i!=0) {
        cout << "\nN=";
        cin >> N;
        if (N%2 == 0) {
            Xsum++;
        } else {
            Ysum++;
        }
        cout << N;

        i = N;
    }

    cout << "\nMusbatlar soni: " << Xsum;
    cout << "\nManfiylar soni: " << Ysum;

    return 0;
}