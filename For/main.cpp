#include<iostream>
#include<conio.h>
#include <ctime>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

// Домашка 
//#define WHILE
//#define FOR
//#define FACTORIAL
//#define DEGREES
//#define ASCII_WHILE
//#define ASCII_FOR
//#define FIBONACCI_1
//#define FIBONACCI_2

// На занятии
//#define FACTORIAL_2  
//#define POWER        
//#define ASCII		   
//#define FIBONACCI_3  

// Домашка
//#define SIMPLE_NUMBERS
//#define MULTIPLICATION_TABLE
#define PYTHAGORAS
//#define MULTIPLICATION_TABLE2
void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE
	int i = 0;  //счетчик цикла
	int n;      //количество итераций
	cout << "Введите количество итераций:"; cin >> n;
	while (i < n)
	{
		cout << "Hello\n";
		i++;
	}
#endif // WHILE

#ifdef FOR
	int n;
	cout << "Введите количество итераций: "; cin >> n;
	for (
		int i = 0;
		i < n;
		i++
		)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif // FOR

#ifdef FACTORIAL
	int n, fact = 1;
	cout << "Введите число: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << " = ";
		fact *= i;
		cout << fact << endl;
	}
#endif // FACTORIAL

#ifdef DEGREES
	double a, n, N = 1;
	cout << " Введите основание и показатель степени: ";
	cin >> a >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;


#endif // DEGREES

#ifdef ASCII_WHILE
	int i = 0, j = 0;
	while (i <= 256)
	{
		cout << i << "-" << (char)i << "\t";
		i++;
		j++;
		if (j == 16)
		{
			cout << endl;
			j = 0;
		}
	}
#endif // ASCII_WHILE

#ifdef ASCII_FOR
	int num = 256;
	for (int i = 0; i < num;)
	{
		cout << (char)i++ << "  ";
		if (i % 16 == 0)cout << endl;
	}
#endif // ASCII_FOR


#ifdef FIBONACCI_1
	int n, f, num1 = 0, num2 = 1;
	cout << "Введите значение до какого числа вывести ряд Фибоначи "; cin >> n;
	for (int i = 0; num1 < n; i++)
	{
		cout << num1 << "\t";
		f = num1 + num2;
		num1 = num2;
		num2 = f;
	}
	cout << endl;
#endif // FIBONACCI_1

#ifdef FIBONACCI_2
	int n, f, num1 = 0, num2 = 1;
	cout << "Введите значение, сколько чисел из ряда Фибоначи вывести: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << num1 << "\t";
		num1 += num2;
		f = num1;
		num1 = num2;
		num2 = f;
	}
#endif // FIBONACCI_2

#ifdef FACTORIAL_2

	int n;
	cout << "Введите число: "; cin >> n;
	int f = 1;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << "\n";
	}
#endif // FACTORIAL_2

#ifdef POWER
	double a;     //основание степени
	int n;	   //показатель степени
	double N = 1; //степень
	cout << " Введите основание степени: "; cin >> a;
	cout << " Введите показатель степени: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // POWER


#ifdef ASCII
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << "  ";
	}

#endif // ASCII

#ifdef FIBONACCI_3
	int n;
	cout << "Введите число:"; cin >> n;
	for (int a = 0, b = 1, c = a + b; a <= n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
	cout << endl;
#endif // FIBONACCI_3

#ifdef SIMPLE_NUMBERS
	int n;
	cout << "Введите предельное число: "; cin >> n;
	system("COLOR 0A");
	int simplex_counter = 0;
	time_t start = clock();
	for (int i = 0; i <= n; i++)
	{
		bool simple = true; //предположим что число простое,но это нужно проверить: 
		for (int j = 2; j < sqrt(i); j++)
			//Функция sqrt() возвращает квадратный корень числа
		{
			if (i % j == 0)
			{
				simple = false;
				break; // Ключевое слово прерывает текущую итерацию и все последующие
			}
		}
		if (simple)simplex_counter++;
		//cout << (simplex_counter++, i) << "\t";
	}
	time_t end = clock();
	cout << endl;
	cout << " Amount of simplex numbers: " << simplex_counter << endl;
	cout << "Calculated by: " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;

#endif // SIMPLE_NUMBERS

#ifdef MULTIPLICATION_TABLE
		int num_1 = 1, num_2 = 1;
	for (int i = 0; i < 10; i++, num_1++)
	{
		for (num_2 = 1; num_2 <= 10; num_2++)
		{
			cout << num_1 << "*" << num_2 << "=" << num_1 * num_2 << "\t";
		}
		cout << endl;
	}
#endif // MULTIPLICATION_TABLE

#ifdef PYTHAGORAS
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{

			cout << i * j << "\t";
		}
		cout << endl;
	}

#endif // PYTHAGORAS
	
#ifdef MULTIPLICATION_TABLE2

	for(int i = 1; i <= 10; i++)
	{
		cout << " Таблица умножения на " << i << ":\n";
		for (int j = 1; j <= 10; j++)
		{
			if (i < 10)cout << " ";
			cout << i << " * ";
			if (j < 10)cout << " ";
			cout << j << " = ";
			if (i * j < 100)cout << " ";
			if (i * j < 10)cout << " ";
			cout<< i * j << endl;
		}
		cout << endl;
	}

#endif // MULTIPLICATION_TABLE2


}