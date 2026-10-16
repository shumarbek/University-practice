// while bilan N gacha bolgan juft sonlar yigindisi
#include <iostream>
using namespace std;

int main() {
    int i=1, N, S=0;
    cout << "N=";
    cin >> N;

    while(i <= N) {
        if(i%2 ==0){
            S += i;
        }
        i++;
    }

    cout << "S=" << S;

    return 0;
}