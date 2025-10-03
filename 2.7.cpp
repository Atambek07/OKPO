#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
    int height, weight;
    cout << "Введите ваш рост (в см): ";
    cin >> height;
    cout << "Введите ваш вес (в кг): ";
    cin >> weight;

    if (height < 100 || height > 250) {
        cout << "Ошибка: рост должен быть от 100 до 250 см." << endl;
        return 0;
    }
    if (weight < 30 || weight > 250) {
        cout << "Ошибка: вес должен быть от 30 до 250 кг." << endl;
        return 0;
    }

    int minWeight = height - 120;
    int maxWeight = height - 80;

    if (weight < minWeight || weight > maxWeight) {
        cout << "Нереалистичные данные: проверьте рост и вес." << endl;
        return 0;
    }

    int optimal = height - 100;
    cout << "Оптимальный вес: " << optimal << " кг" << endl;

    if (weight < optimal - 10) {
        cout << "Вам нужно поправиться." << endl;
    }
    else if (weight > optimal + 10) {
        cout << "Вам нужно похудеть." << endl;
    }
    else {
        cout << "Ваш вес в норме." << endl;
    }

	system("pause");
    return 0;
}
