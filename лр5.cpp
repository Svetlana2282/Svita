#include <iostream>
#include "windows.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int x;
	cout << "Введіть латинську букву\n";
	cin >> x;
	switch (x)
	{
	case 'a':// коментарий второй
	case 'o': //comm
	case 'e':
	case 'i':
	case 'u':
	case 'y':
		cout << "Голосна"; break;
	case'q':case'w':case'r':case't':case'p':case's':case'd':case'f':case'g':case'h':case'j':case'k':case'l':case'z':case'x':case'c':case'v':case'b':case'n':case'm': cout << "Приголосна"; break;
	default:cout << "Не вірно введено символ";
	}
}
