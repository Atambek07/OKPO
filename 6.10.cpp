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
			cout << "arr[" << i << "][" << j << "] = ",
            cin >> arr[i][j];

    int index = 0;
    int count = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int temp = index;
            bool isPower = false;

            if (temp == 1) { 
                isPower = true;
            }
            else {
                while (temp > 1) {
                    if (temp % 2 != 0) { 
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
        cout << "\nНет элементов с индексами, являющимися степенями двойки.\n";

    return 0;
}
