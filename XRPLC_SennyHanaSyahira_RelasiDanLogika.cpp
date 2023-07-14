#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int hasil;
	
	hasil = ('a' == 'A');
	cout<<"Hasil ekspresi ('a' == 'A') adalah "<<hasil<<endl;
	
	hasil = ('a' == 'a');
	cout<<"Hasil eskpresi ('a' == 'a') adalah "<<hasil<<endl;
	
	hasil = -1 > 1;
	cout<<"Hasil ekpresi -1 > 1 adalah "<<hasil<<endl;
	
	hasil = 1 < 2;
	cout<<"Hasil ekpresi 1 < 2 adalah "<<hasil<<endl;
	
	hasil = (2+4)-3 > 15 && 1 < 5;
	cout<<"Hasil ekspresi (2+4)-3 > 15 && 1 < 5 adalah "<<hasil<<endl;
	
	hasil = 2+4-3 >  15 && 1 < 5;
	cout<<"Hsail ekspresi 2+4-3 >  15 && 1 < 5 adalah "<<hasil<<endl;
	
	hasil = (5==5) && (6 != 2);
	cout<<"Hasil ekpresi (5==5) && (6 != 2) adalah "<<hasil<<endl;
	
	hasil= (5 > 1) || (6 < 1);
	cout<<"Hasil ekspresi (5 > 1) || adalah "<<hasil<<endl;
	
	cout<<"Selesai\n\n";
	
	
	system ("pause");
	return 0;
}

