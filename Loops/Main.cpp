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
	cout << "������� ���������� ��������: "; cin >> n;
	while (i < n)
	{
		cout << "Hello world!" << endl;
		n++;
	}
#endif // WHILE_1

#ifdef WHILE_2

	int n; // ���������� ��������
	cout << "������� ���������� ��������: "; cin >> n;
	while (n)
	{
		cout << n << "\t";
		n--;
	}

#endif // WHILE_2

#ifdef POLINDROME
	int number; //�����, �������� � ����������
	int revers = 0; // �����, ���������� ����� �������
	cout << "����� �����: "; cin >> number;
	int buffer = number;// ����� �����, ���������� � ����������
	while (buffer)
	{
		revers *= 10; // ����������� ����� ��� ���������� �������� �������
		revers += buffer % 10; // �������� ������� ������ �����
		buffer /= 10; // ������� ���������� ����� ������� ������
	}
	cout << number << endl;
	cout << revers << endl;
	if (revers == number)
	{
		cout << "����� ���������" << endl;
	}
	else
	{
		cout << "��� ����� �� ���������" << endl;
	}
}
#endif // POLINDROME

#ifdef TICKET

int number;
int sum1 = 0;
int sum2 = 0;
cout << "������� ����� ������: "; cin >> number;
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
cout << "���������� �����!!!";
else
cout << "������� �����!";
#endif // DEBUG

#ifdef ESCAPE27

char key; // ��� �������
do
{
	key = _getch(); // ������� _getch() ������� ������� ������� � ���������� ASCII ��� ������� �������.
	cout << (int)key << "\t" << key << endl;
	//(int)key - ����� �������������� ���������� � ��� ������ int, ��� ���� ����� ������� ��� �������.
} while (key != 27);

#endif // ESCAPE27

}
