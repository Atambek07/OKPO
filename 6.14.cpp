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

    // Вывод исходной матрицы
    cout << "\nИсходная матрица:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j)
            cout << arr[i][j] << "\t";
        cout << "\n";
    }

    int diagLength = (n < m) ? n : m;
    int minDiagonal = arr[0][0];
    int minIndex = 0;

    for (int i = 1; i < diagLength; ++i) {
        if (arr[i][i] < minDiagonal) {
            minDiagonal = arr[i][i];
            minIndex = i;
        }
    }

    bool isMinInColumn = true;
    for (int k = 0; k < n; ++k) {
        if (arr[k][minIndex] < arr[minIndex][minIndex]) {
            isMinInColumn = false;
            break;
        }
    }

    if (isMinInColumn) {
        cout << "\nЭлемент, минимальный в своём столбце и минимальный на главной диагонали: "
             << arr[minIndex][minIndex] 
             << " (позиция: " << minIndex << ", " << minIndex << ")\n";
    } else {
        cout << "\nТакого элемента нет.\n";
    }

    cout << "\nПрограмма завершена.\n";
    return 0;
}
