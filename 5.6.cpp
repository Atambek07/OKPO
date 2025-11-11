#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
    const int n = 5;
    int c[n];
    int index = -1;      
    long long product = 1; 
    int sum = 0;           

    cout << "Введите 5 чисел последовательности:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "c[" << i << "] = ";
        cin >> c[i];
    }

    for (int i = 0; i < n; i++) {
        if (c[i] == 0) {
            index = i;
            break;
        }
        else {
            product *= c[i];
        }
    }

    if (index != -1) {
        for (int i = index + 1; i < n; i++) {
            sum += c[i];
        }
        if (index == 0) {
			cout << "Сумма элементов после первого нулевого элемента: " << sum << endl;
            cout << "Произведение не вычисляется, так как нулевой элемент в начале.";
        }
        else if (index == n - 1) {
            cout << "Произведение элементов до первого нулевого элемента: " << product << endl;
			cout << "Сумма не вычисляется, так как нулевой элемент в конце.";
        }
        else {
            cout << "Произведение элементов до первого нулевого элемента: " << product << endl;
            cout << "Сумма элементов после первого нулевого элемента: " << sum << endl;
        }
    }
    else {
        cout << "В последовательности нет нулевых элементов." << endl;
    }

    return 0;
}
