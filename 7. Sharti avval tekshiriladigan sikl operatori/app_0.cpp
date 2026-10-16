#include <iostream>
using namespace std;

int main() {
    int a, b, sum=0;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;

    for (int i = a; i <= b; i++) {
        sum += i;
    }

    cout << "sum=" << sum;

    return 0;
}