#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//ƒќћјЎ ј
//#define TASK_0
//#define TASK_1
//#define TASK_2
//#define TASK_3
//#define TASK_4
//#define TASK_5
//#define TASK_6

//Ќј «јЌя“»»
//#define SQUARE
//#define TRINGLE_1
//#define TRINGLE_2
//#define TRINGLE_3
//#define TRINGLE_4

// ƒќћјЎ ј*
//#define TASK_7
//#define RHOMBIK
//#define RHOMBIK_2
//#define RHOMBIK_3
//#define CHES_1

void main()
{
	setlocale(LC_ALL, "");

#ifdef TASK_0
	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= n; j++) cout << "* ";
		cout << endl;
	}
#endif // TASK_0

#ifdef TASK_1
	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) cout << "* ";
		cout << endl;
	}

#endif // TASK_1

#ifdef TASK_2
	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		for (int j = n; j > i; j--) cout << "* ";
		cout << endl;

		/*for (int j = i; j < n; j++) cout << "* ";
		cout << endl;*/
	}

#endif // TASK_2

#ifdef TASK_3
	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++) cout << "  ";
		for (int j = n; j > i; j--) cout << "* ";
		cout << endl;

		/*for (int j = 0; j < i; j++) cout << "  ";
		for (int j = i; j < n; j++) cout << "* ";
		cout << endl;*/
	}
#endif // TASK_3

#ifdef TASK_4
	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = n; j > i; j--) cout << "  ";
		for (int j = 0; j <= i; j++) cout << "* ";
		cout << endl;

		/*for (int j = i; j < n; j++) cout << "  ";
		for (int j = 0; j <= i; j++) cout << "* ";
		cout << endl;*/
	}

#endif // TASK_4

#ifdef TASK_5
	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << " "; cout << "/";
		for (int j = 0; j < i; j++) cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) cout << " "; cout << "\\";
		for (int j = i; j < n - 1; j++) cout << "  "; cout << "/";
		cout << endl;
	}

#endif // TASK_5

#ifdef TASK_6
	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			if (i % 2 == j % 2) cout << "+ ";
			else cout << "- ";
		cout << endl;
	}
#endif // TASK_6

	/*int n;
	cout << "¬ведите количество звездочек: "; cin >> n;*/

#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

#endif //SQUARE

#ifdef TRINGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

#endif //TRINGLE_1

#ifdef TRINGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRINGLE_2

#ifdef TRINGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "  ";
		}
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

#endif // TRINGLE_3

#ifdef TRINGLE_4

#endif // TRINGLE_4

#ifdef TASK_7
	int a, b;

	cout << " ¬ведите значени€ a: "; cin >> a;
	cout << " ¬ведите значени€ b: "; cin >> b;

	if (a != b)
	{
		cout << " ¬веденное значение: a = " << a << ", b = " << b << endl;
		a = a + b;
		b = a - b;
		a = a - b;
		cout << " «начение после замены: a = " << a << ", b = " << b << endl;
	}

	/*if (a != b)
	{
		cout << " ¬веденное значение: a = " << a << ", b = " << b << endl;
		int c = a;
		a = b;
		b = c;
		cout << " «начение после замены : a = " << a << ", b = " << b << endl;
	}*/


#endif // TASK_7

#ifdef RHOMBIK
	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << " "; cout << "/";
		for (int j = 0; j < i; j++) cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) cout << " "; cout << "\\";
		for (int j = i; j < n - 1; j++) cout << "  "; cout << "/";
		cout << endl;
	}

#endif // RHOMBIK

#ifdef RHOMBIK_2
	for (int i = 0; i < n * 2; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{
			if (i + n == j || j + n == i)cout << "\\";
			else if (n - i % n - 1 == j % n && i + j != n * 2 - 1) cout << "/";
			else cout << " ";
		}
		cout << endl;
	}

#endif // RHOMBIK_2

#ifdef RHOMBIK_3
	int x = 0;
	while (x < 2 * n)
	{
		for (int j = 0; j < 2 * n; j++)
		{
			if (x < n)
			{
				if (j == n - 1 - x) cout << "/";
				else if (j == n + x) cout << "\\";
				else cout << " ";
			}
			else
			{
				if (j == x - n) cout << "\\";
				else if (j == 3 * n - 1 - x) cout << "/";
				else cout << " ";
			}
		}
		cout << endl;
		x++;
	}

#endif // RHOMBIK_3


}