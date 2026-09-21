//-----------------------------------------------------
// TMI(Tana massa indeksi)
//-----------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    float m, h, TMI;
    string result;

    cout << "TMI'ni hisoblash uchun ma'lumotlarni kiriting:\n";
    cout << "- vazn(kg): ";
    cin >> m;
    cout << "- bo'y(sm): ";
    cin >> h;

    if (m > 0 && h > 0) {
        TMI = m / ((h*h) / 10000);

        if (TMI < 18.5) {
            result = "Kam vazn";
        } else if (18.5 <= TMI && TMI < 25) {
            result = "Me'yoriy vazn";
        } else if (25 <= TMI && TMI < 30) {
            result = "Ortiqcha vazn";
        } else if (30 <= TMI && TMI < 35) {
            result = "Semizlik, 1-daraja";
        } else if (35 <= TMI && TMI < 40) {
            result = "Semizlik, 2-daraja";
        } else {
            result = "Semizlik, 3-daraja";
        }

        cout << "\n===== TMI hisoboti =====" << "\n- vazn: " << m << "kg" << "\n- bo'y: " << h/100 << "m"<< "\n- TMI: " << TMI << "\n- Holat: " << result << "\n========================";
    }

    return 0;
}