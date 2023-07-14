//Program pengurangan, pembagian, perkalian

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    //deklarasi
    int A;
    int B;
    int C;
    int D;
    int E;
    
    cout<<"Masukan angka 36 : ";
    cin>>A;
    cout<<"Masukan angka 4 : ";
    cin>>B;
    cout<<"Masukan angka 6 : ";
    cin>>C;
    cout<<"Masukan angka 15 : ";
    cin>>D;
    
    //proses
    E=A*B/C-D;
    
    cout<<"Hasil operasi bilangan bulat adalah :"<<E<<endl;
    
    system ("pause");
    return 0;
}
