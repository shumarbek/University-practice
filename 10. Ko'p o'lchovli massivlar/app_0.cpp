#include <iostream>
using namespace std;

int main() {
    int A[][3] = {{7, 3, 4}, {5, 0, 4}, {2,-3, 8}};
    int i, j;

    for(i=0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            cout << A[i][j] << "\t";
        cout << endl;
    }

    cout << "-----------------------------------------------";

    int k;
    k = A[0][0];
    A[0][0] = A[2][2];
    A[2][2] = k;
    cout << endl;

    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}