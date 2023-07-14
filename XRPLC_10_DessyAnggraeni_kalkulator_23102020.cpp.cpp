#include <iostream>

using namespace std;

int main() 
{
 float a,b,hasil;
 char aritmatika;
 
 cout << "Program Kalkulator \n\n";
 
 //masukan input dari user
 cout << "Masukan nilai pertama: ";
 cin >> a;
 cout << "Pilih operator +,-,/,*: ";
 cin >> aritmatika;
 cout << "Masukan nilai kedua: ";
 cin >> b;
 
 cout << "\nHasil perhitungan: ";
 cout << a << aritmatika << b;
 
 if (aritmatika == '+'){
 	hasil = a + b;
 } else if (aritmatika == '-'){
 	hasil = a - b;
 } else if (aritmatika == '/'){
 	hasil = a / b;
 } else if (aritmatika == '*'){
 	hasil = a * b;
 } else {
 	 cout << "operatot anda salah" <<endl;
 }
 
 cout << "=" << hasil <<endl;
 
 cin.get();
 return 0;
}

