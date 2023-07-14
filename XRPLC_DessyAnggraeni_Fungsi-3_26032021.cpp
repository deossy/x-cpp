#include <iostream>
#include <cstdlib>
using namespace std;

float half_of(float k);

int main ()
{
	float x = 3.5, y =65.11, z;
	
	//in this call, x is the argument to half_of().
	z = half_of(x);
	cout<<"The value of z= "<<z<<endl;
	
	//in this call, y is the argument to half_of().
	z = half_of(y);
	cout<<"The value of z= "<<z<<endl;
	return 0;
}

float half_of(float k)
{
	/* k is the parameter. Each time half_of() is called,
	     k has the value that was passed as an argument. */
	return (k/2);
}
