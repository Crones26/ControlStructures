#include<iostream>
#include<conio.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define IF_ELSE
//#define WHILE_1
//#define WHILE_2

void main()
{
    setlocale(LC_ALL,"rus");

#ifdef IF_EALSE
	int temperature;
	cout << "������� ����������� �������:"; cin >> temperature;
	if (temperature > 0)
	{
		cout << "�� ����� �����" << endl;
	}
	else
	{
		cout << "�� ����� �������" << endl;
	}
#endif // IF_EALSE

#ifdef WHILE_1
	int i = 0; //������� �����
	int n;     //���������� �������� 
	cout << "������� ���������� ��������"; cin >> n;

	while (++i < n)
	{
		cout << i << "Hello World\n";
		//i++;
	}
#endif // WHILE_1

#ifdef WHIKE_2

	int n;
	cout << "������� ���������� ��������:"; cin >> n;
	while (n--)
	{
		cout << n << "hello World" << endl;
	}

#endif // WHIKE_2
	
	char key;
	do
	{
		key = _getch();//������� _getch() ������� ������� ������� � ���������� ASCII-��� ������� �������
						// ���� ASCII-��� �� ����������� ���������� key
		// ������� _getch ��������� � ���������� <conio.h>
		cout << (int)key << "\t" << key << endl;
		// (int)key - ��� ����� �������������� ���� 'char'� 'int' ��� ���� ����� ������� ASCII-��� ������� ����� 
	} while (true);

}
	

