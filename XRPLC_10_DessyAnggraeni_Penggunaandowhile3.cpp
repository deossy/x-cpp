#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int x=4;
	
	cout<<"Contoh Program Looping do-while\n";
	
    do
    {
        cout<<"x="<<x<<endl;
        x--;
        }while(x>0);
	
	cout<<"\nSelesai";
	system("pause");
    return 0;
	
}