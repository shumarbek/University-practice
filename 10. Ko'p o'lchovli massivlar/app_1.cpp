#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int a[4][4];
    srand(time(0));

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            a[i][j] = rand() % 10;
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nTakrorlangan: ";

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int s = 0;

            for (int k = 0; k < 4; k++) {
                for (int l = 0; l < 4; l++) {
                    if (a[i][j] == a[k][l])
                        s++;
                }
            }

            if (s > 1) {
                bool bor = false;

                for (int x = 0; x < i; x++)
                    for (int y = 0; y < 4; y++)
                        if (a[i][j] == a[x][y])
                            bor = true;

                for (int y = 0; y < j; y++)
                    if (a[i][j] == a[i][y])
                        bor = true;

                if (!bor)
                    cout << a[i][j] << " ";
            }
        }
    }

    return 0;
}
