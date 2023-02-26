// fib.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include<stdlib.h>
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите нужный вам номер числа фибоначи: ";
	cin >> n;
	int* ar = new int[n];
	ar[0] = 0;
	ar[1] = 1;
	for (int i = 2; i < n; i++)
	{
		ar[i] = ar[i - 1] + ar[i - 2];
	}
	cout << "Нужное вам число: " << ar[n - 1];

	return 0;
}