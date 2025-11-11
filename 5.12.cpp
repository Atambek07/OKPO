#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
    const int n = 5;
    double a[n];
    int index = -1; 

    cout << "Введите 5 элементов массива:" << endl;
    for (int i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        for (int i = index; i < n; i++) {
            if (a[i] > 1)
                a[i] -= 0.5;
            else
                a[i] += 0.5;
        }

        cout << "Изменённый массив:" << endl;
        for (int i = 0; i < n; i++) {
            cout << "a[" << i << "] = " << a[i] << " \n";
        }
        cout << endl;
    }
    else {
        cout << "В массиве нет положительных элементов." << endl;
    }

    return 0;
}
