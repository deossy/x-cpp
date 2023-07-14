#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int bulan;
	
	cout<<"Masukan angka Bulan: "; cin>>bulan;
	
	if(bulan==1)
	cout<<"Bulan 1 adalah bulan Januari\n";
	else if(bulan==2)
      cout<<"Bulan 2 adalah bulan Februari\n";
    else if(bulan==3)
      cout<<"Bulan 3 adalah bulan Maret\n";
	else if(bulan==4)
	  cout<<"Bulan 4 adalah bulan April\n";
	else if(bulan==5)
	  cout<<"Bulan 5 adalah bulan Mei\n"; 
	else if(bulan==6)
	  cout<<"Bulan 6 adalah bulan Juni\n";
	else if(bulan==7)
	  cout<<"Bulan 7 adalah bulan Juli\n";
	else if(bulan==8)
	  cout<<"Bulan 8 adalah bulan Agustus\n";
	else if(bulan==9)
	  cout<<"Bulan 9 adalah bulan September\n";
	else if(bulan==10)
	  cout<<"Bulan 10 adalah bulan Oktober\n";
	else if(bulan==11)
	  cout<<"Bulan 11 adalah bulan November\n";
	else if(bulan==12)
	  cout<<"Bulan 12 adalah bulan Desember\n";
	else
	{
		cout<<"Input data Salah..!!!\n";
		cout<<"Masukan data harus 1-12 \n";
	}
	
	cout<<"\nSelesai\n\n";
	
	system ("pause");
	return 0;
}

