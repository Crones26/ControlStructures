#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define CALC_1

void main()
{
    setlocale(LC_ALL, "");

    double a, b; // числа, вводимые с клавиатуры
    char s;      //s-Sing(знак операции)
    cout << "¬ведите выражение:"; cin >> a >> s >> b;

#ifdef CALC_1
    if (s == '+')
    {
        cout << a << "+" << b << "=" << a + b << endl;
    }
    else if (s == '-')
    {
        cout << a << "-" << b << "=" << a - b << endl;
    }
    else if (s == '*')
    {
        cout << a << "*" << b << "=" << a * b << endl;
    }
    else if (s == '/')
    {
        cout << a << "/" << b << "=" << a / b << endl;
    }
    else
    {
        cout << "Error: no operation" << endl;
    }
    

    }
#endif // CALC_1

    switch (s)
    {
    case'+':cout << a << "+" << b << "=" << a + b << endl; break;
    case'-':cout << a << "-" << b << "=" << a - b << endl; break;
    case'*':cout << a << "*" << b << "=" << a * b << endl; break;
    case'/':
            if (b!=0) cout << a << "/" << b << "=" << a / b << endl;
            else cout << "ERRORS Division by zero" << endl;
            break;
    default:cout << "ERROR:No operation" << endl;
    }
    main();

}


