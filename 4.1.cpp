// ОКПО_4.1.cpp 
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int sum = 0;
	for (int i = 1; i <= 50; i++) {
		if (i % 3 == 0) {
			sum += i;
		}
	}
	cout << "Сумма чисел от 1 до 50, кратных 3: " << sum << endl;
	system("pause");
	return 0;
}

