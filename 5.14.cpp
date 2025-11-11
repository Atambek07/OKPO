#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    const int N = 5;
    int arr[N];
    int i;

    cout << "Введите 5 целых чисел:\n";
    for (i = 0; i < N; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    cout << "\n\n";

    bool neg = false;
    int minNeg = 0;
    int minID = -1;

    for (i = 0; i < N; i++) {
        if (arr[i] < 0) {
            if (!neg) {
                neg = true;
                minNeg = arr[i];
                minID = i;
            }
            else if (arr[i] < minNeg) {
                minNeg = arr[i];
                minID = i;
            }
        }
    }

    if (!neg) {
        cout << "В массиве нет отрицательных элементов. Операция невозможна.\n";
        return 0;
    }

    cout << "Минимальный отрицательный элемент: " << minNeg << endl;
    cout << "Его индекс в массиве: " << minID << endl;

    if (minID == 0) {
        cout << "Минимальный отрицательный элемент находится в начале массива (индекс 0).\n";
        cout << "Слева нет элементов, изменения не требуются.\n";
        return 0;
    }

    bool lneg = false;
    for (i = 0; i < minID; i++) {
        if (arr[i] < 0) {
            lneg = true;
            break;
        }
    }

    if (!lneg) {
        cout << "Перед минимальным отрицательным элементом нет других отрицательных чисел.\n";
        return 0;
    }

    cout << "\nИзменяем элементы:\n";
    for (i = 0; i < minID; i++) {
        if (arr[i] < 0) {
            arr[i] = arr[i] * minNeg;
        }
    }

    cout << "\nИтоговый массив:\n";
    for (i = 0; i < N; i++) {
        cout << "arr[" << i << "] = " << arr[i] << "\n";
    }
    cout << "\n";

    return 0;
}
