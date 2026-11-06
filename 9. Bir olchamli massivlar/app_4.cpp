// statik massiv yarating(tasodifiy sonlar), 
// dastlabki massivni ekranga chiqaring, 
// berilgan topshiriqni bajaring, natijani ekranga chiqaring

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    int A[100], B[100], i, a = -15, b = 25;
    int x = 0;
    srand(time(0));

    cout << "Dastlabki A massivi:" << endl;

    for (i = 0; i < 10; i++) {
        A[i] = rand() % (b - a + 1) + a;
        cout << "A[" << i << "] = " << A[i] << endl;
    }

    cout << "----------------------------------" << endl;

    for (i = 0; i < 10; i++) {
        if (A[i] > 0) {
            B[x] = A[i];
            x++;
        }
    }

    cout << "Yangi B massiv:" << endl;
    
    for (i = 0; i < x; i++) {
        cout << "B[" << i << "] = " << B[i] << endl;
    }

    cout << "Musbatlar soni: " << x << endl;

    return 0;
}
