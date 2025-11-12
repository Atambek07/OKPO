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
			cout << "arr[" << i << "][" << j << "] = ",
            cin >> arr[i][j];

    int countEven = 0;

    cout << "\n";
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < m; ++j) { 
            if (arr[i][j] % 2 == 0) {
                cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << endl;
                countEven++;
            }
        }
    }

    cout << "\nКоличество чётных элементов над главной диагональю: " << countEven << endl;

    return 0;
}
