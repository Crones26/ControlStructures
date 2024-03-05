#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define CHES_1
//#define CHES_1_1
//#define CHES_2
//#define CHES_2_1
//#define RHOMBIK_BONUS
//#define PASCAL
#define HARD_CHES

#define UP_LEFT_ANGLE     (char)218
#define UP_RIGHT_ANGLE    (char)191
#define LOW_LEFT_ANGLE    (char)192
#define LOW_RIGHT_ANGLE   (char)217
#define HORIZONT_LINE     (char)196 << (char)196
#define VERTICAL_LINE     (char)179 
#define WHITE_BOX		  (char)219 <<(char)219
#define BLACK_BOX		  ' ' << ' '

void main()
{
	setlocale(LC_ALL, "");

#ifdef CHES_1

	int n;
	cout << "¬ведите размер доски "; cin >> n; n++;
	setlocale(LC_ALL, "C");
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0)cout << UP_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UP_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << LOW_LEFT_ANGLE;
			else if (i == n && j == n)cout << LOW_RIGHT_ANGLE;
			else if (i == 0 || i == n)cout << HORIZONT_LINE;
			else if (j == 0 || j == n)cout << VERTICAL_LINE;
			else if (i % 2 == j % 2)cout << WHITE_BOX;
			else cout << "  ";
		}
		cout << endl;	
	}
#endif // CHES_1

#ifdef CHES_1_1
	int n;
	cout << "¬ведите размер доски "; cin >> n;
	setlocale(LC_ALL, "C");
	cout << char(218);
	for (int i = 0; i < n * 2; i++)cout << char(196); cout << char(191) << endl;
	for (int l = 0; l < n; l++)
	{
		cout << char(179);
		for (int j = 0; j < n; j++)
		{
			if ((l % 2 == j % 2))cout << char(219); else cout << "  ";
			if ((l % 2 == j % 2))cout << char(219);
		}
		cout << char(179);
		cout << endl;
	}
	cout << char(192);
	for (int x = 0; x < n * 2; x++)cout << char(196); cout << char(217) << endl;
#endif // CHES_1_1

#ifdef CHES_2
int n;
cout << "¬ведите размер доски "; cin >> n;
for (int i = 0; i < n; i++)
{
	for (int j = 0; j < n; j++)
	{
		for (int l = 0; l < n; l++)
		{
			for (int k = 0; k < n; k++)
			{
				cout << (i % 2 == l % 2 ? "* " : "  ");
			}
		}
		cout << endl;
	}
}
#endif // CHES_2

#ifdef CHES_2_1
int n, x;
cout << "¬ведите размер доски "; cin >> n;
cout << "¬ведите размер клетки "; cin >> x;
for (int i = 0; i < n * x; i++)
{
	for (int j = 0; j < n * x; j++)
	{
		if ((i / x + j / x) % 2 == 0)
		{
			cout << "* ";
		}
		else
		{
			cout << "  ";
		}
	}
	cout << endl;
}
#endif // CHES_2_1

#ifdef RHOMBIK_BONUS
int n;
cout << "¬ведите размер: "; cin >> n;
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

#endif // RHOMBIK_BONUS

#ifdef PASCAL
int n;
cout << "¬ведите размер треугольника ѕаскал€ "; cin >> n;
for (int i = 0; i < n; i++)
{
	for (int j = 1; j <= n - i; j++) cout << " "; 
	{
		int l = 1;
		for (int j = 0; j <= i; j++)
		{
			cout << l << " ";
			l = l * (i - j) / (j + 1);
		}
		cout << endl;
	}
	cout << endl;
}
cout << endl;

#endif // PASCAL

#ifdef HARD_CHES
int n;
cout << "¬ведите размер доски: "; cin >> n;
for (int i = 0; i < n * n; i++)
{
	for (int j = 0; j < n * n; j++)
	{
		(i % (2 * n) < n && j % (2 * n) < n) ||
			(i % (2 * n) >= n && j % (2 * n) >= n) ? cout << "* " : cout << "  ";
	}
	cout << endl;
}
#endif // HARD_CHES

}
