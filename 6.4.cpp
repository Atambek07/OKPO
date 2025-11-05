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
            cin >> arr[i][j];
        }
    }

    cout << "\nВведённая матрица:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    bool found = false;
    cout << "\nЧётные элементы, стоящие на нечётных местах (нумерация с 1):\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // Чётное число на нечётной позиции (если (i + j) нечётное)
            if (arr[i][j] % 2 == 0 && (i + j) % 2 == 1) {
                cout << "Элемент " << arr[i][j] 
                     << " находится в позиции (" << i + 1 << ", " << j + 1 << ")" << endl;
                found = true;
            }
        }
    }

    if (!found)
        cout << "В массиве нет чётных элементов, стоящих на нечётных местах." << endl;

    cout << "\nПрограмма завершена успешно." << endl;

    return 0;
}
