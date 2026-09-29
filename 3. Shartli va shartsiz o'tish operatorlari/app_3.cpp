//---------------------------------------------------------------------------
// Sonning musbat yoki manfiy ekanligini tekshring (ternar operatori bilan)
//---------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int x;
    string z;
    cout << "x sonni kiting: ";
    cin >> x;

    z = (x > 0) ? "musbat" : "manfiy";
    cout << x << " " << z << " son";

    return 0;
}