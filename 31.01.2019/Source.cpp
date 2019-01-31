#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<time.h>
#include<iomanip>
#include<Windows.h>

using namespace std;

int fact(int a)
{
	int d = 1, s = 1;
	do
	{
		s = s * d;
		d++;

	} while (d <= a);

	return s;
}

float resis(float r1, float r2, char type)
{
	if (type == 'p') return(r1*r2) / (r1 + r2);
	else if (type == 'c') return r1 + r2;
	else return -1;
}

char A(int a, int b)
{

	if (a<b)return '<';
	else if (a > b) return '>';
	else return '=';
}

double Cilindr(float R, float H)
{
	const float Pi = 3.14;

	return Pi * R * R * H;
}

bool isUpper(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return true;
	}
	else
		return false;
	
}

bool glasn(char B)
{
	if (B == 'а' || B == 'у' || B == 'е' || B == '€' || B == 'ы' || B == 'о' || B == 'э' || B == 'и'||B == 'ю')
	{
		return 1;
	}
	else return 0;
}

void stroka(int A, char C)
{
	for (size_t i = 0; i < A; i++)
	{
		cout << C;
	}
}

int para(char x,int a, int b, int c)
{
	if (x == 'o')
	{
		return a * b*c;
	}
	else if (x == 'p')
	{
		return 2 * (a*b + a * c + b * c);
	}

}

void frame(int x, int y, int length, int heigth)
{
	for (size_t i = 0; i < y; i++)
	{
		cout << endl;
	}
	for (size_t i = 0; i < length; i++)
	{
		for (size_t j = 0; j < heigth; j++)
		{
			if (j< x)
			{
				cout << " ";
			}
			else {
				if (j == x || j == length + x -1 || i ==0 || i == heigth -1)
				{
					cout << "*";
				}
				else cout << " ";
			}

		}
		cout << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "");

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//int flag = 0, a, b, c;
	//char x;

	//do
	//{

	//cout << ("Continue?1/0");
	//cin >> flag;

	//} while (flag == 1);

	frame(5,5,10,15);

	//	cout << ("ќбъем или площадь?o/p");
//	cin >> x;
//	cout << ("¬ведите три стороны: ");
//	cin >> a;
//	cin >> b;
//	cin >> c;

//cout << para(x,a,b,c) << endl;

	//stroka(5, '*');

	//cout << glasn('€') << endl;

	//cout << fact(6) << endl;

	/*cout << resis(4, 2, 'p') << endl;*/

	//int a, b;

	//cout << "¬ведите первое число";
	//cin >> a;
	//cout << "¬ведите второе число";
	//cin >> b;

	//cout << A(a, b) << endl;

	//float R, H;

	//cout << "¬ведите радиус цилиндра:";
	//cin >> R;
	//cout << "¬ведите высоту цилиндра:";
	//cin >> H;

	//cout << Cilindr(R, H) << endl;


	//char c;
	//cin >> c;

	//cout << isUpper(c) << endl;

	system("pause");

	return 0;
}