#include <iostream>
using namespace std;

int main() {
    int a, b, max;
    cout << "a, b qiymatlarni kiriting: ";
    cin >> a >> b;

    // if (a > b) {
    //     max = a;
    // } else {
    //     max = b;
    // }
    max = (a > b) ? a : b;

    cout << "max= " << max;

    return 0;
}