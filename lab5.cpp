#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

// Çàâäàííÿ 1 
int task1() {

    int n;
    double x, y;
    int count1 = 0, count2 = 0;

    double x1 = 1, y1 = 2, r1 = 3;
    double x2 = 2, y2 = 3, w = 2, h = 3;

    cout << "Ââåä³òü ê³ëüê³ñòü òî÷îê: ";
    cin >> n;

    for (int i = 0; i < n; i++) {

        cout << "Ââåä³òü êîîðäèíàòè " << i + 1 << " òî÷êè: ";
        cin >> x >> y;

        if ((x - x1) * (x - x1) + (y - y1) * (y - y1) <= r1 * r1) {
            count1++;
        }

        if (x >= x2 && x <= x2 + w && y >= y2 && y <= y2 + h) {
            count2++;
        }
    }

    cout << "Ó ïåðø³é ô³ãóð³: " << count1 << endl;
    cout << "Ó äðóã³é ô³ãóð³: " << count2 << endl;

    return 0;

}

// Çàâäàííÿ 2
void task2() {
    double x;
    int n;

    cout << "Ââåä³òü x òà n: ";
    cin >> x >> n;

    double sum = 0;
    for (int i = 1; i <= n; i++) {
        double el = pow(x, i - 1);
        sum += el;

        if (i % 4 == 0) {
            cout << el << endl;
        }
    }

    cout << "Ñóìà: " << sum << endl;
}

void task3() {

    double x, u, sum;

    cout << "Ââåä³òü x (x > 1): ";
    cin >> x;

    double eps = 0.00001;

    u = 1 / x;
    sum = u;

    int p = 1;

    while (fabs(u) >= eps) {

        u = 1 / pow(x, p);

        sum += u;

        p += 2;

    }

    cout << "Îñòàíí³é ÷ëåí: " << u << endl;
    cout << "Ñóìà: " << sum << endl;

}

void menu() {

    setlocale(LC_ALL, "ukrainian");

    int task;

    do {

        cout << "Âèáåð³òü çàâäàííÿ (àáî 0 äëÿ âèõîäó): " << endl;
        cout << "1 - Çàâäàííÿ 1" << endl;
        cout << "2 - Çàâäàííÿ 2" << endl;
        cout << "3 - Çàâäàííÿ 3" << endl;

        cin >> task;

        switch (task) {
        case 1:
            task1();
            break;

        case 2:
            task2();
            break;

        case 3:
            task3();
            break;

        case 0:
            cout << "Âèõ³ä ç ïðîãðàìè" << endl;
            break;

        default:
            cout << "Ïîìèëêà! Âèáåð³òü 1, 2, 3 àáî 0" << endl;
        }

    } while (task != 0);

}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    menu();

    return 0;

}
