#include<iostream>
#include<conio.h>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define WHILE_1
//#define WHILE_2
//#define POLINDROME
//#define TICKET
//#define ESCAPE27

void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE_1
	while (true)cout << "Hello World!";
	int n;
	int i;
	cout << "Введите количество итераций: "; cin >> n;
	while (i < n)
	{
		cout << "Hello world!" << endl;
		n++;
	}
#endif // WHILE_1

#ifdef WHILE_2

	int n; // Количество итераций
	cout << "Введите количество итераций: "; cin >> n;
	while (n)
	{
		cout << n << "\t";
		n--;
	}

#endif // WHILE_2

#ifdef POLINDROME
	int number; //Число, вводимое с клавиатуры
	int revers = 0; // Число, записанное задом наперед
	cout << "Ввиде число: "; cin >> number;
	int buffer = number;// Копия числа, введенного с клавиатуры
	while (buffer)
	{
		revers *= 10; // Освобождаем место для следующего младшего разряда
		revers += buffer % 10; // Полумаем младший разряд числа
		buffer /= 10; // Удаляем полученный ранее младший разряд
	}
	cout << number << endl;
	cout << revers << endl;
	if (revers == number)
	{
		cout << "Число палиндром" << endl;
	}
	else
	{
		cout << "Это число не полиндром" << endl;
	}
}
#endif // POLINDROME

#ifdef TICKET

int number;
int sum1 = 0;
int sum2 = 0;
cout << "Введите номер билета: "; cin >> number;
while (number > 999)
{
	sum1 += number % 10;
	number /= 10;
}
while (number)
{
	sum2 += number % 10;
	number /= 10;
}
if (sum1 == sum2)
cout << "Счастливый билет!!!";
else
cout << "Простой билет!";
#endif // DEBUG

#ifdef ESCAPE27

char key; // Код клавиши
do
{
	key = _getch(); // функция _getch() ожидает нажатие клавиши и возвращает ASCII код нажатой клавиши.
	cout << (int)key << "\t" << key << endl;
	//(int)key - явное преобразование переменной в тип данных int, для того чтобы увидеть код клавиши.
} while (key != 27);

#endif // ESCAPE27

}
