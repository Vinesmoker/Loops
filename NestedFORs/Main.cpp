#include<iostream>
using namespace std;

#define MULTIPLICATION_TABLE
//#define PLUS_MINUS

void main()
{

	setlocale(LC_ALL, "");



#ifdef MULTIPLICATION_TABLE
	int sum = 0;
	for (int i = 1; i <= 10; i++) // Основной или внешний
	{
		// Счетчика 'j' еще нет
		cout << "Таблица умножения на " << i << ":\n";
		for (int j = 1; j <= 10; j++) // Вложенный
		{
			sum = i * j;
			if (i < 10)cout << " ";
			cout << i << " * ";
			if (j < 10)cout << " ";
			cout << j << " = ";
			if (i * j < 100)cout << " ";
			if (i * j < 10)cout << " ";
			cout << sum << endl;
		}
		cout << endl;
		// Счетчика 'j' уже нет
	}
#endif // MULTIPLICATION_TABLE

#ifdef PLUS_MINUS
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if ((j + i) % 2 == 0)cout << "- ";else cout << "+ ";
			//(j + i) % 2 == 0 ? cout << "- " : cout << "+ ";
			//cout << ((i + j) % 2 + 0 ? "+ " : "- ");
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
#endif // PLUS_MINUS

}