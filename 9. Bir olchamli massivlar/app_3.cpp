// statik massiv yarating(tasodifiy sonlar), 
// dastlabki massivni ekranga chiqaring, 
// berilgan topshiriqni bajaring, natijani ekranga chiqaring

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    int A[100], i, a=-15, b=25;
    srand(time(0));

    for (i = 0; i < 10; i++) {
        A[i] = rand() % (b - a) + a;
        cout << "A[" << i << "] = " << A[i] << endl;
    }

    cout << "------------------------------------------" << endl;

    int B[50];
    int x =0;
    for (i = 0; i < 10; i++) {
        if (- 15 <= A[i] && A[i] <= 25) {
            B[x] = A[i];
            x++;
            cout << "B[" << i << "] = " << B[i] << endl;
        }
    }
    
    return 0;
} 