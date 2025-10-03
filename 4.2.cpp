
#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");	
	int sum, count, i;
	sum = 0; count = 0; i = 1;
	while (count <= 10) {
		if (i % 5 == 0) {
			sum = sum + i;
			count++;
		}
		i++;
	}
	cout << "Сумма первых 10 чисел, кратных 5: " << sum << endl;
	system("pause");
	return 0;
}


