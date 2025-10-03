#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int sum = 0;
	while (sum <= 100) {
		cout << "Введите число: ";
		int a;
		cin >> a;
		sum += a;
		cout << "Сумма: " << sum << endl;
	}
	cout << "Превышение 100!" << endl;
	system("pause");
	return 0;
}

