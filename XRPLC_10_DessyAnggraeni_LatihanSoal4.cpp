#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int x=0; //x,y, hasil;
	int y=8;
	int hasil=0;
	
	while(x<=8 && y>=0)
	
	{
		hasil=x+y;
		cout<<x<<"+"<<y<<"="<<hasil<<"\n";
		x++;
		y--;
	}
	
	cout<<"selesai"<<endl;
	system ("pause");
	return 0;
}

