#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Введите трехзначное число: ";
    cin >> num;

    if (num < 100 || num > 999) {
        cout << "Ошибка: число должно быть трехзначным!" << endl;
        return 0;
    }

    int a = num / 100;
    int b = (num / 10) % 10;
    int c = num % 10;

    int digits[3] = {a, b, c};
    int results[6];
    int count = 0;

    cout << "Все возможные уникальные трехзначные числа:\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (i != j && j != k && i != k) {
                    if (digits[i] == 0) continue;

                    int newNum = digits[i] * 100 + digits[j] * 10 + digits[k];

                    bool exists = false;
                    for (int m = 0; m < count; m++) {
                        if (results[m] == newNum) {
                            exists = true;
                            break;
                        }
                    }

                    if (!exists) {
                        results[count] = newNum;
                        count++;
                        cout << newNum << endl;
                    }
                }
            }
        }
    }

    return 0;
}
