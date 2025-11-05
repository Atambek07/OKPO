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

    int grades[100][4]; 
    int totalSum = 0;   
    int failCount = 0;  

    // Ввод оценок студентов
    for (int i = 0; i < N; ++i) {
        cout << "\nВведите 4 оценки студента " << i + 1 << " (от 1 до 5): ";
        bool hasFail = false; 

        for (int j = 0; j < 4; ++j) {
            cin >> grades[i][j];
            while (grades[i][j] < 1 || grades[i][j] > 5) {
                cout << "Ошибка! Введите оценку от 1 до 5: ";
                cin >> grades[i][j];
            }

            totalSum += grades[i][j];       
            if (grades[i][j] < 3) hasFail = true; 
        }

        if (hasFail) failCount++; 
    }

    
    double average = (double)totalSum / (N * 4);

    
    cout << "\nКоличество неуспевающих студентов: " << failCount << endl;
    cout << "Средний балл группы: " << average << endl;

    cout << "\nПрограмма завершена.\n";
    return 0;
}
