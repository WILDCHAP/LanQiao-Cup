#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	for(int i=1;i<=1000;i++)
	{
		if(i%11==0 && i%17==0)
		cout<<i<<endl;
	} 
	system("pause");
	return 0;
}
