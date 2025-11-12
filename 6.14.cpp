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

    int a[100][100];
    cout << "\nВведите элементы массива (" << n << " строк по " << m << " чисел):\n";
    for (int i = 0; i < n; ++i) { 
        for (int j = 0; j < m; ++j) { 
            cout << "a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    int diag = (n < m) ? n : m;
    int minDiag = a[0][0];
    int minIndex = 0;

    for (int i = 1; i < diag; ++i) {
        if (a[i][i] < minDiag) {
            minDiag = a[i][i];
            minIndex = i;
        }
    }

    bool isMinM = true;
    for (int k = 0; k < n; ++k) {
        if (a[k][minIndex] < a[minIndex][minIndex]) {
            isMinM = false;
            break;
        }
    }

    if (isMinM) {
        cout << "\nЭлемент, минимальный в своём столбце и минимальный на главной диагонали: " << a[minIndex][minIndex];
    }
    else {
        cout << "\nТакого элемента нет.\n";
    }

    return 0;
}
