#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
    const int n = 5;
    int d[n];
    int sum = 0;

    cout << "Введите 5 элементов массива:\n";
    for (int i = 0; i < n; i++) {
        cout << "d[" << i << "] = ";
        cin >> d[i];
    }

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) { 
            sum += d[i];
        }
    }

    cout << "\nСумма чисел на нечетных местах = " << sum << endl;

    return 0;
}
