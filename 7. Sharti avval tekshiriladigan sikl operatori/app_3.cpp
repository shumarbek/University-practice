#include <iostream>
using namespace std;

int main() {
    int i=1, S=0, P=1;

    while(i <= 5) {
        S += i;
        P *= i;
        i++;
    }

    cout << "S=" << S << endl;
    cout << "P=" << P;

    return 0;
}