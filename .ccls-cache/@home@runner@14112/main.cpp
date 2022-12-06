#include <iostream>
#include <ctime>//для бібліотеки time
#include <cstdlib>//для бібліотеки random
using namespace std;
int main(){
	int arr[6][4];
	int even = 0;//змінна для парних чисел рядка
	srand(time(NULL));//отримує у вигляді параметра поточний системний час, який при кожному запуску програми буде різним. 
	for (int i = 0; i < 6; ++i) { // для рядків 
		for (int j = 0; j < 4; ++j) {// для стовпчиків
			arr[i][j] =rand() %10;
		}
	}
	for (int i = 0; i < 4; ++i) {
		even = 0;//оновлює щоразу після циклу в рядку
		for (int j = 0; j < 6; ++j) {
			if (arr[j][i] % 2 == 0)//рахує кількість парних в стовпчику
				even++;
		}
		cout << "for " << i << " column even number = " << even << endl;
	}
	for (int i = 0; i < 6; ++i) {
		for (int j = 0; j < 4; ++j) {
			cout << arr[i][j] << ' ';
		}//виведення двовимірного масиву
		cout << endl;
	}
}