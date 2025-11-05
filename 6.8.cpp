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
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> arr[i][j];

    cout << "\nИсходная матрица:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j)
            cout << arr[i][j] << "\t";
        cout << "\n";
    }

    int maxVal = arr[0][0], minVal = arr[0][0];
    int maxRow = 0, maxCol = 0, minRow = 0, minCol = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j];
                maxRow = i; maxCol = j;
            }
            if (arr[i][j] < minVal) {
                minVal = arr[i][j];
                minRow = i; minCol = j;
            }
        }
    }

    cout << "\nНайденный минимальный элемент: " << minVal
         << " (позиция: " << minRow + 1 << ", " << minCol + 1 << ")\n";
    cout << "Найденный максимальный элемент: " << maxVal
         << " (позиция: " << maxRow + 1 << ", " << maxCol + 1 << ")\n";

    if (minVal == maxVal) {
        cout << "\nМинимальный и максимальный элементы равны (значение = "
             << minVal << "). Обмен не требуется — матрица не изменится.\n";
    } else {
        // Выполняем обмен значений в найденных позициях
        int temp = arr[minRow][minCol];
        arr[minRow][minCol] = arr[maxRow][maxCol];
        arr[maxRow][maxCol] = temp;

        cout << "\nМатрица после обмена минимального и максимального элементов:\n";
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j)
                cout << arr[i][j] << "\t";
            cout << "\n";
        }
    }

    cout << "\nПрограмма завершена успешно.\n";
    return 0;
}
