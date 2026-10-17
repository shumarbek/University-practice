#include <iostream>
using namespace std;

int main() {
    double masofa, narx=0;
    cout << "Masofani kiriting(km): ";
    cin >> masofa;

    if (0 < masofa && masofa <= 5) {
        narx += 10000;
    } else if (5 < masofa && masofa <= 15) {
        narx += masofa * 2000;
    } else if (15 < masofa) {
        narx += (15 * 2000) + ((masofa - 15) * 1500);
    } else {
        cout << "Masofa 0(nol) dan kichik bo'lmaydi!" << endl;
    }

    cout << "narx=" << narx;

    return 0;
}