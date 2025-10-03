#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int a1, a2, num;
    cout << "Введите первый член арифметической прогрессии: ";
    cin >> a1;
    cout << "Введите второй член арифметической прогрессии: ";
    cin >> a2;

    if (a1 == a2) {
        cout << "Ошибка: два последовательных члена не могут быть равны!" << endl;
        return 0;
    }

    cout << "Введите произвольное число: ";
    cin >> num;

    int d = a2 - a1;

    int diff = num - a1;

    if (diff % d == 0) {
        int n = diff / d; 
        if (n >= 0) {
            cout << "Число принадлежит арифметической прогрессии (это " << n + 1 << "-й член)." << endl;
        } else {
            cout << "Число не принадлежит прогрессии (находится до её начала)." << endl;
        }
    } else {
        cout << "Число не принадлежит арифметической прогрессии." << endl;
    }

    return 0;
}
