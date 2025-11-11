#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
    const int n = 5;
    int a[n];
    int index = -1;

    cout << "Введите 5 элементов массива:" << endl;
    for (int i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        if (index == n - 1) {
            cout << "Нулевой элемент находится в конце массива. Нет положительных элементов после него." << endl;
            return 0;
		}
        else {
            for (int i = index + 1; i < n; i++) {
                if (a[i] > 0) {
                    a[i] *= 2;
                }
            }

            cout << "Изменённый массив:" << endl;
            for (int i = 0; i < n; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    else {
        cout << "В массиве нет нулевых элементов." << endl;
    }

    return 0;
}
