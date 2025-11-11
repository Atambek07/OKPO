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
        for (int j = 0; j < m; ++j) {
			cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
            

    int maxVal = arr[0][0], minVal = arr[0][0];
    int maxN = 0, maxM = 0, minN = 0, minM = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j];
                maxN = i; maxM = j;
            }
            if (arr[i][j] < minVal) {
                minVal = arr[i][j];
                minN = i; minM = j;
            }
        }
    }


    if (minVal == maxVal) {
        cout << "\nМинимальный и максимальный элементы равны";
    }
    else {
        int temp = arr[minN][minM];
        arr[minN][minM] = arr[maxN][maxM];
        arr[maxN][maxM] = temp;

        cout << "\nМатрица после обмена минимального и максимального элементов:\n";
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j)
                cout << arr[i][j] << "\t";
            cout << "\n";
        }
    }

    return 0;
}
