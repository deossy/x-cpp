#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    //deklarasi variable
    int m,n;
    
    //for looping execution
    cout<<"Menaik \tMenurun\n";
    for(m=1;m<=10;m++)
    {
     cout<<"\t"<<m<<endl;
    }
    
    for(n=10;n>=1;n--)
    {
     cout<<"\t"<<n<<endl;
    }
    
    cout<<"Selesai"<<endl;
    
    system("pause");
    return 0;
}

