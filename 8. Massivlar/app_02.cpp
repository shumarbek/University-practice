// 0 gacha ishlatish
#include <iostream>
using namespace std;

int main() {
    int N, i=1, Xsum=0, Ysum=0;

    do
    {
        cout << "N=";
        cin >> N;
        if (N > 0) {
            Xsum++;
        } else if (N < 0) {
            Ysum++;
        }

        i = N;
    } while (i!=0);

    cout << "\nMusbatlar soni: " << Xsum;
    cout << "\nManfiylar soni: " << Ysum;

    return 0;
}