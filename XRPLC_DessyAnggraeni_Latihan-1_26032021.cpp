#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
//Program mencari nilai terbesar antara dua buah bilangan bulat;

int main();
    int a, b, c;
    cout << "Program mencari nilai terbesar antara dua buah bilangan bulat \n";
    cout << "masukkan nilai 1 : "; cin >> a;
    cout << "masukkan nilai 2 : "; cin >> b;

    if ( a > b && a > c )
        cout << "nilai terbesar   : " << a << endl;
    else if ( b > a && b > c )
        cout << "nilai terbesar   : " << b << endl;
    else
        cout << "nilai terbesar   : " << c << endl;

    getch();
}
