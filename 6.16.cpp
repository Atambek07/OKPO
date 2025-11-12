#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int N;
    cout << "Введите количество студентов: ";
    cin >> N;

    if (N <= 0) {
        cout << "Ошибка: количество студентов должно быть положительным!" << endl;
        return 0;
    }

    int a[100][4];
    int sum = 0;
    int count = 0;

    for (int i = 0; i < N; ++i) {
        cout << "\nВведите 4 оценки студента " << i + 1 << " (от 1 до 5): ";
		double gpa = 0.0;

        for (int j = 0; j < 4; ++j) {
            cin >> a[i][j];
            while (a[i][j] < 1 || a[i][j] > 5) {
                cout << "Ошибка! Введите оценку от 1 до 5: ";
                cin >> a[i][j];
            }

            sum += a[i][j];
            gpa += a[i][j];
        }
		gpa /= 4.0;
        if (gpa < 3.5) {
            count++;
        }
    }


    double avg = (double)sum / (N * 4);


    cout << "\nКоличество неуспевающих студентов: " << count << endl;
    cout << "Средний балл группы: " << avg << endl;

    return 0;
}
