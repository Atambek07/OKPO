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
        cout << "Ошибка: размеры матрицы должны быть положительными!" << endl;
        return 0;
    }

    int arr[100][100]; 
    cout << "\nВведите элементы матрицы (" << n << " строк по " << m << " чисел):\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
			cout << "arr[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> arr[i][j];
        }
    }

    long long product = 1;
    bool found = false;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] > 0 && arr[i][j] % 2 == 0) {
                product *= arr[i][j];
                found = true;
            }
        }
    }

    cout << "\n";

    if (found)
        cout << "Произведение всех положительных чётных элементов: " << product << endl;
    else
        cout << "В массиве нет положительных чётных элементов." << endl;

    return 0;
}
