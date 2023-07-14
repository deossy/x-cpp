#include <iostream>
#include <cstdlib>


int main()
{

    int Data1, Data2;
    int a = 0;
    int b = 1;
    int c;
    
    Data1 = a && b;
    Data2 = a || b;
    c = ! a;
    
    cout<<"Data 1 adalah : "<< Data1<<endl;
    cout<<"Data 2 adalah : "<< Data2<<endl;
    cout<<"c adalah : "<<c<<endl;
    
    return0;
    system("pause");
