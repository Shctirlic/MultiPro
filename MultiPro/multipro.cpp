#include <iostream>
#include <cmath> 
#include "functions.h" // подключение файла-заголовочника с прототипами функций
#include "structure.h" // подключение файла заголовка с прототипами функций
#include "data.h" // подключение файла-заголовочника с дополнительными переменными
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	cout << "PI = " << _PI << "\n";
	_N = 10;
	cout << " N = " << _N << "\n";



	//библиотека со структурой
	/*
	person tom{ "Tom Smith", 18, "manager", 45000 };
		show_person(tom);*/



	// библиотека с функциями
	/*cout << sum_AB(5, 4) << "\n";

	const int size = 5;
	int arr[size]{ 1, 2, 3, 4, 5 };
	show_arr(arr, size);

	cout << "Введите число: ";
		cin >> n;
	cout << absolute(n) << "\n";*/






	return 0;
}