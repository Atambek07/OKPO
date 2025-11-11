#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
    const int n = 5;
    int c[n];
    int count0 = 0;        
    int count1 = 0;        
    int x = 0; 
    bool found = false;
    int i = 0;

    cout << "Введите 5 элементов (0 или 1):" << endl;
    while (i < n) {
		cout << "c[" << i << "] = ";
        cin >> c[i];
        if (c[i] == 0 || c[i] == 1) {
            i++;
        } else {
            cout << "Ошибка: введите только 0 или 1." << endl;
		}
    }

    for (int i = 0; i < n; i++) {
        if (c[i] == 0)
            count0++;
        else if (c[i] == 1)
            count1++;
    }

    for (int i = 0; i < n; i++) {
        if (c[i] == 1) {
            found = true;
            break;
        }
        if (c[i] == 0)
            x++;
    }

    cout << "Количество нулей: " << count0 << endl;
    cout << "Количество единиц: " << count1 << endl;

    if (found)
        cout << "Количество нулей до первой единицы: " << x << endl;
    else
        cout << "В массиве нет единиц." << endl;

    return 0;
}
