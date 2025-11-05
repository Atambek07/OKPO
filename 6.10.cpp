#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int n, m;
    cout << "Введите количество строк (n): ";
    cin >> n;
    cout << "Введите количество столбцов (m): ";
    cin >> m;

    if (n <= 0 || m <= 0) {
        cout << "Ошибка: размеры массива должны быть положительными!" << endl;
        return 0;
    }

    int arr[100][100];
    cout << "\nВведите элементы массива (" << n << " строк по " << m << " чисел):\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> arr[i][j];

    cout << "\nИсходный массив:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j)
            cout << arr[i][j] << "\t";
        cout << "\n";
    }

    cout << "\nЭлементы, индексы которых являются степенями двойки (индексация с 0):\n";

    int index = 0;
    int count = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            // Простая проверка степени двойки
            int temp = index;
            bool isPower = false;

            if (temp == 0 || temp == 1) { // 0 и 1 считаем степенями двойки
                isPower = true;
            } else {
                while (temp > 1) {
                    if (temp % 2 != 0) { // если деление на 2 оставляет остаток → не степень двойки
                        isPower = false;
                        break;
                    }
                    temp = temp / 2;
                    isPower = true;
                }
            }

            if (isPower) {
                cout << "Элемент с индексом " << index << " (" << i << ", " << j
                     << ") = " << arr[i][j] << endl;
                count++;
            }

            index++;
        }
    }

    if (count == 0)
        cout << "Нет элементов с индексами, являющимися степенями двойки.\n";

    cout << "\nПрограмма завершена.\n";
    return 0;
}
