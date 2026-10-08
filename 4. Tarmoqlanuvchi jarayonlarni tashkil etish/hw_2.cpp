//-------------------------------------------------------------------
// Oyda qaysi bayramlar borligini aniqlash
//-------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int oy;
    cout << "Oy raqamini kiriting: ";
    cin >> oy;
    cout << "============================================\n";

    switch (oy) {
        case 1:
            cout << "YANVAR oyida mavjud bayramlar:\n";
            cout << "1-yanvar | Ynagi yil\n";
            cout << "14-yanvar | Vatan himoyachilari kuni\n";
            break;
        case 2:
            cout << "FEVRAL oyida mavjud bayramlar:\n";
            cout << "4-fevral | Butunjahon saraton kasalligiga qarshi kurash kuni\n";
            cout << "20-fevral | Butunjahon ijtimoiy adolat kuni\n";
            cout << "21-fevral | Xalqaro ona tili kuni\n";
            break;
        case 3:
            cout << "MART oyida mavjud bayramlar:\n";
            cout << "8-mart | Xotin-qizlar kuni\n";
            cout << "20-mart | Xalqaro baxt kuni\n";
            cout << "21-mart | Navro'z\n";
            break;
        case 4:
            cout << "APREL oyida mavjud bayramlar:\n";
            cout << "7-aprel | Butunjahon salomatlik kuni\n";
            cout << "22-aprel | Yer kuni\n";
            break;
        case 5:
            cout << "MAY oyida mavjud bayramlar:\n";
            cout << "1-may | Xalqaro mehnatkashlar kuni\n";
            cout << "5-may | Kasb va mehnat kuni\n";
            cout << "9-may | Xotira va qadrlash kuni\n";
            cout << "15-may | Xalqaro oila kuni\n";
            cout << "31-may | Tamakisiz dunyo kuni\n";
            break;
        case 6:
            cout << "IYUN oyida mavjud bayramlar:\n";
            cout << "1-iyun | Xalqaro bolalarni himoya qilish kuni\n";
            cout << "12-iyun | Bolalar mehnatiga qarshi kurash kuni\n";
            cout << "26-iyun | Giyohvandlik va noqonuniy narkotik savdosiga qarshi kurash kuni\n";
            cout << "30-iyun | Yoshlar kuni\n";
            break;
        case 7:
            cout << "IYUL oyida mavjud bayramlar:\n";
            cout << "20-iyul | Xalqaro shaxmat kuni\n";
            cout << "30-iyul | Odam savdosiga qarshi kurash kuni\n";
            break;
        case 8:
            cout << "AVGUST oyida mavjud bayramlar:\n";
            cout << "12-avgust | Xalqaro yoshlar kuni\n";
            cout << "23-avgust | Qul savdosi va uning bekor qilinishini xotirlash kuni\n";
            break;
        case 9:
            cout << "SENTABR oyida mavjud bayramlar:\n";
            cout << "1-sentabr | Mustaqillik kuni\n";
            cout << "1-sentabr | Bilim kuni\n";
            cout << "8-sentabr | Xalqaro savodxonlik kuni\n";
            cout << "21-sentabr | Xalqaro tinchlik kuni\n";
            cout << "23-sentabr | Xalqaro imo-ishora tillari kuni\n";
            break;
        case 10:
            cout << "OKTABR oyida mavjud bayramlar:\n";
            cout << "1-oktabr | O'qituvchi va murabbiylar kuni\n";
            cout << "4-oktabr | Butunjahon hayvonlarni himoya qilish kuni\n";
            cout << "5-oktabr | Butunjahon o'qituvchilar kuni\n";
            cout << "21-oktabr | O'zbek tili bayrami kuni\n";
            cout << "24-oktabr | BMT kuni\n";
            break;
        case 11:
            cout << "NOYABR oyida mavjud bayramlar:\n";
            cout << "10-noyabr | Butunjahon fan kuni\n";
            cout << "15-noyabr | <Tug'ilgan kunim>\n";
            cout << "16-noyabr | Xalqaro bag'rikenglik kuni\n";
            cout << "18-noyabr | O'zbekiston Respublikasi Davlat bayrog'i qabul qilingan kun\n";
            cout << "20-noyabr | Butunjahon bolalar kuni\n";
            cout << "25-noyabr | Ayollarga nisbatan zo'ravonlikka barham berish kuni\n";
            break;
        case 12:
            cout << "DEKABR oyida mavjud bayramlar:\n";
            cout << "3-dekabr | Xalqaro nogironligi bo'lgan shaxslar kuni\n";
            cout << "8-dekabr | O'zbekiston Respublikasi Konstitutsiya kuni\n";
            cout << "9-dekabr | Xalqaro korrupsiyaga qarshi kurash kuni\n";
            cout << "10-dekabr | Inson huquqlari kuni\n";
            cout << "20-dekabr | Xalqaro insoniy birdamlik kuni\n";
            break;
        default:
            cout << "Oy tartib raqami xato kiritildi!";
    }

    cout << "============================================";

    return 0;
}