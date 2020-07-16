#include<iostream>
using namespace std;

int main()
{
	for(int i=1;i<=9;i++)
	for(int j=0;j<=9;j++)
	for(int z=0;z<=9;z++)
	{
		if((i*i*i+j*j*j+z*z*z)==(i*100+j*10+z))
		cout<<(i*100+j*10+z)<<endl;
	}
	return 0;
} 
