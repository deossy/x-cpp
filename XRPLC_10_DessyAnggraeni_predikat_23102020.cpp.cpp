#include<iostream>
#include<conio.h>
using namespace std;
main ()
{
double Nilai;
char skor;
     
cout<<" Masukan Nilai : ";
cin>>Nilai;

if(Nilai >= 100)
skor= 'A' ;
else

if(Nilai >= 80)
skor= 'B';
else

if(Nilai >= 60)
skor= 'C';
else 

if(Nilai >= 55)
skor= 'D';
else
skor= 'E';
    
cout<<" Skor : "<<skor<<endl;
getch () ;
}
