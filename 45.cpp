#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

// �������� 1 
int task1() {

    int n;
    double x, y;
    int count1 = 0, count2 = 0;

    double x1 = 1, y1 = 2, r1 = 3;
    double x2 = 2, y2 = 3, w = 2, h = 3;

    cout << "������ ������� �����: ";
    cin >> n;

    for (int i = 0; i < n; i++) {

        cout << "������ ���������� " << i + 1 << " �����: ";
        cin >> x >> y;

        if ((x - x1) * (x - x1) + (y - y1) * (y - y1) <= r1 * r1) {
            count1++;
        }

        if (x >= x2 && x <= x2 + w && y >= y2 && y <= y2 + h) {
            count2++;
        }
    }

    cout << "� ������ �����: " << count1 << endl;
    cout << "� ����� �����: " << count2 << endl;

    return 0;

}

// �������� 2
void task2() {
    double x;
    int n;

    cout << "������ x �� n: ";
    cin >> x >> n;

    double sum = 0;
    for (int i = 1; i <= n; i++) {
        double el = pow(x, i - 1);
        sum += el;

        if (i % 4 == 0) {
            cout << el << endl;
        }
    }

    cout << "����: " << sum << endl;
}

void task3() {

    double x, u, sum;

    cout << "������ x (x > 1): ";
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

    cout << "�������� ����: " << u << endl;
    cout << "����: " << sum << endl;

}

void menu() {

    setlocale(LC_ALL, "ukrainian");

    int task;

    do {

        cout << "������� �������� (��� 0 ��� ������): " << endl;
        cout << "1 - �������� 1" << endl;
        cout << "2 - �������� 2" << endl;
        cout << "3 - �������� 3" << endl;

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
            cout << "����� � ��������" << endl;
            break;

        default:
            cout << "�������! ������� 1, 2, 3 ��� 0" << endl;
        }

    } while (task != 0);

}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    menu();

    return 0;

}