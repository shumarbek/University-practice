// 1 dan N gacha bolgan sonlar yigindisi chiqarish
#include <iostream>
using namespace std;

int main() {
    int i=1, N, S=0;
    cout << "N=";
    cin >> N;

    while(i <= N) {
        S += i;
        i++;
    }

    cout << "S=" << S;

    return 0;
}
