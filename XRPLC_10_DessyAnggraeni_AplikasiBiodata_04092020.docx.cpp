#include <iostream>
#include <conio.h>

using namespace std;

main()
{
 char NoAbsen[20], nama[20], Kelas[20], tempatlahir[10] ,tanggallahir[50], jurusan[10], nilaiUN[10], agama[10];
 
cout<<"================================================"<<endl;
cout<<"                APLIKASI BIODATA "<<endl;
cout<<"               SISWA SMKN 1 CIMAHI "<<endl;
cout<<"================================================"<<endl;
 cout << "No Absen \t: ";
 cin.getline(NoAbsen, 20 );
 cout << "Nama \t\t: ";
 cin.getline(nama, 20);
 cout << "Kelas \t\t: ";
 cin.getline(Kelas, 20);
 cout << "Tempat lahir \t: ";
 cin.getline(tempatlahir, 10);
 cout << "Tanggal lahir \t: ";
 cin.getline(tanggallahir, 50);
 cout << "Jurusan \t: ";
 cin.getline(jurusan, 10);
 cout << "Nilai UN \t: ";
 cin.getline(nilaiUN, 10);
 cout << "Agama \t\t: ";
 cin.getline(agama, 10);
 cout <<endl<<endl;
 return 0;
}
