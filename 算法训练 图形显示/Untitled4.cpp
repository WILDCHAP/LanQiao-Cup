#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int i=n;
	while(i!=0)
	{
		for(int j=0;j<i;j++)
		cout<<"* ";
		cout<<endl;
		i--;
	}
	system("pause");
	return 0;
}
