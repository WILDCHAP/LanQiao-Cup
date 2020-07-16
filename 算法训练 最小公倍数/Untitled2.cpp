#include<iostream>
#include<stdlib.h>
using namespace std;

int lcm(int a,int b)
{
	int k;
	for(int i=1;i<b;i++)
	{
		k=a*i;
		if(k%b==0)		//a*iÄÜ±»bÕû³ý
			return k; 
	}
	return a*b;
}

int main()
{
	int a,b;
	cin>>a>>b;
	cout<<lcm(a,b); 
	system("pause");
	return 0;
} 
