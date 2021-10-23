#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
	/*int r, l;
	double s, a;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	a = 3,14;
	printf("Введіть значення радіуса основи r\n");
	scanf_s("%i", &r);
	printf("введить значення твірної l\n");
	scanf_s("%i", &l);
	s = a * r * l;
	printf("a=%i\nr=%i\nl=%i\nРезультат площі бічної поверхні=%lf", a,r,l,s);
	system("pause");
	return 0;*/

#include <iostream>
#include "windows.h"
	using namespace std;
	int main()
	{
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		int r, h;
		double V, a;
		a = 3, 14;
		cout << "Введите r\n";
		cin >> r;
		cout << "Введите h\n";
		cin >> h;
		V = a * r * r * h / 3;
		cout << "V =" << V << endl;
		system("pause");
		return 0;
	}
