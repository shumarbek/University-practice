#include <iostream>
using namespace std;

int main() {
    int i=1, S=0;

    // for(i; i <= 5; i++) {
    //     S += i;;
    // }

    while(i <= 5) {
        S += i;
        i++;
    }

    cout << "S=" << S;

    return 0;
}