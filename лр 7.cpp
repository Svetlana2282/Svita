#include <iostream>
#include <string>

using namespace std;

double funk(int y, double t)  //  заголовок
{ //тіло функції
    //int y;
    //cin >> y;
    return y+t;
}


int main()
{
    int r;
    double y;
    cin >> r;
    cout << funk (r, y);
}

