#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
    const int n = 5;
    int y[n];

    cout << "Введите 5 элементов массива: \n";
    for (int i = 0; i < n; i++) {
		cout << "y[" << i << "] = ";
        cin >> y[i];
    }

    int minIndex = 0;
    int PosIndex = -1;

    for (int i = 1; i < n; i++) {
        if (y[i] < y[minIndex]) {
            minIndex = i;
        }
    }

    
    for (int i = 0; i < n; i++) {
        if (y[i] > 0) {
            PosIndex = i;
            break;
        }
    }

    if (PosIndex != -1) {
        if (minIndex == PosIndex){
            cout << "\nОни равны между собой.";
        }
        else {
            int temp = y[minIndex];
            y[minIndex] = y[PosIndex];
            y[PosIndex] = temp;

            cout << "\nПосле замены элементов:\n";
            for (int i = 0; i < n; i++) {
				cout << "y[" << i << "] = " << y[i] << endl;
            }
        }
    }
    else {
        cout << "\nВ массиве нет положительных элементов.";
    }

    return 0;
}
