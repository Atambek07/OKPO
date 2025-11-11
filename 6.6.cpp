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
			cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    int count = 0;      
    int sum = 0;        

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] < 0) {
                sum += arr[i][j];
                count++;
            }
        }
    }

    cout << "\n";

    if (count > 0) {
        double avg = double(sum) / count;
        cout << "Среднее арифметическое отрицательных элементов: " << avg << endl;
    }
    else {
        cout << "В массиве нет отрицательных элементов." << endl;
    }

    return 0;
}
