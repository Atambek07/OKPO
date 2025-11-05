#include <iostream>
#include <iomanip> // для вывода с фиксированным количеством знаков
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

    int countNeg = 0;      // количество отрицательных чисел
    int sumNeg = 0;        // сумма отрицательных чисел

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] < 0) {
                sumNeg += arr[i][j];
                countNeg++;
            }
        }
    }

    cout << "\n";

    if (countNeg > 0) {
        double average = static_cast<double>(sumNeg) / countNeg;
        cout << "Среднее арифметическое отрицательных элементов: "
             << fixed << setprecision(2) << average << endl;
    } else {
        cout << "В массиве нет отрицательных элементов." << endl;
    }

    cout << "\nПрограмма завершена успешно." << endl;
    return 0;
}
