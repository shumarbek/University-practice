#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    int A[10], i;
    srand(time(0));

    for (i = 0; i < 10; i++) {
        A[i] = rand() % 100;
        cout << "A[" << i << "] = " << A[i] << endl;
    }

    return 0;
} 