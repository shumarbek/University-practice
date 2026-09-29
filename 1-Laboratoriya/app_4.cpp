#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x=8, y=-4;
    bool c=0, Z;

    Z = (y < pow(x, 2)) && (x < pow(y, 2)) || ((x < 0) && (y < 0) && !c) && (x > y + 2);
    cout << boolalpha << Z;

    return 0;
}