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

    int arr[100][100]; // ограничение до 100x100
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

    long long product = 1; 
    bool found = false;    

    // Поиск положительных чётных элементов
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

    cout << "\nПрограмма завершена успешно." << endl;

    return 0;
}
