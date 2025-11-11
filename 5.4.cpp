#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    const int n = 5;
    int x[n];
    int sum = 0;
	int index = -1;
    
    cout << "Введите 5 элементов массива:\n";
    for (int i = 0; i < n; i++) {
        cout << "x[" << i << "] = ";
        cin >> x[i];
    }
	cout << endl;

    for (int i = 0; i < n; i++) {
        if (x[i] == 0) {
            index = i;
            break;
		}
        else {
            sum += x[i];
		}
    }

    if (index != -1) {
        if (index == 0) {
			cout << "Сумма элементов, предшествующих первому нулевому элементу: " << sum << endl;
            cout << "Нету предшествующих элементов";
        }
        else {
			cout << "Сумма элементов, предшествующих первому нулевому элементу: " << sum;
        }
    }
    else {
        cout << "В массиве нет нулевого элемента";
	}
        
    return 0;
}
