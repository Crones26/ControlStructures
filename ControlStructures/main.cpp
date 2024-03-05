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
	cout << "Введите температуру воздуха:"; cin >> temperature;
	if (temperature > 0)
	{
		cout << "На улице тепло" << endl;
	}
	else
	{
		cout << "На улице холодно" << endl;
	}
#endif // IF_EALSE

#ifdef WHILE_1
	int i = 0; //счетчик цикла
	int n;     //количество итераций 
	cout << "Введите количество итераций"; cin >> n;

	while (++i < n)
	{
		cout << i << "Hello World\n";
		//i++;
	}
#endif // WHILE_1

#ifdef WHIKE_2

	int n;
	cout << "Введите количество итераций:"; cin >> n;
	while (n--)
	{
		cout << n << "hello World" << endl;
	}

#endif // WHIKE_2
	
	char key;
	do
	{
		key = _getch();//Функция _getch() ожидает нажатия клавиши и возвращает ASCII-код нажатой клавиши
						// этот ASCII-код мы присваиваем переменной key
		// Функция _getch объявлена в библиотеке <conio.h>
		cout << (int)key << "\t" << key << endl;
		// (int)key - это явное преобразование типа 'char'в 'int' для того чтобы увидеть ASCII-код нажатой клави 
	} while (true);

}
	

