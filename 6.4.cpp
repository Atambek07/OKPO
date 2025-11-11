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
        cout << "\nОшибка: размеры матрицы должны быть положительными!" << endl;
        return 0;
    }

    int arr[100][100];
    cout << "\nВведите элементы матрицы (" << n << " строк по " << m << " чисел):\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
			cout << "arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    cout << endl;

    bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] % 2 == 0 && (i + j) % 2 == 1) {
                cout << arr[i][j] << endl;
                found = true;
            }
        }
    }

    if (!found)
        cout << "В массиве нет чётных элементов, стоящих на нечётных местах." << endl;

    return 0;
}
