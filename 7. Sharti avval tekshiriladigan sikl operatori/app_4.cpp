// 2 3 4
#include <iostream>
using namespace std;

int main() {
    int a, b, S=0;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "Bu sonlar:";

    while(a <= b) {
        if (a%2==0 && a%3==0 && a%4==0) {
            cout << a << " ";
            S += a;
        }

        a++;
    }

    cout << "\nS=" << S;

    return 0;
}