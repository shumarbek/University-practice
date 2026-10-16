#include <iostream>
using namespace std;

int main() {
    int N, S=0;
    cout << "N=";
    cin >> N;

    for(N ; N > 0; N /= 10) {
        S = S + N%10;
    }

    cout << "S=" <<  S;

    return 0;
}