// 0 gacha ishlatish
#include <iostream>
using namespace std;

int main() {
    int N, Xsum=0, Ysum=0;

    for(int i = 1; i!=0; i=N) {
        cout << "N=";
        cin >> N;
        if (N > 0 && N != 0) {
            Xsum++;
        } else if (N < 0) {
            Ysum++;
        }
    }
 
    cout << "\nMusbatlar soni: " << Xsum;
    cout << "\nManfiylar soni: " << Ysum;

    return 0;
}

// MAssiv berilgan, bu 10ta ga ega..