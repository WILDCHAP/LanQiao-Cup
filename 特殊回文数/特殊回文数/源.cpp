/*#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		for (int i = 100; i <= 999; i++)
		{
			for (int j = 0; j <= 999; j++)
			{
				if (j <= 99)		//Á½Î»Êý
				{
					if ((i % 10 + 2 * (j / 10 + j % 10)) == n && ((j % 10) * 10 + j / 10) == i / 10)
						cout << i * 100 + j<<endl;
				}
				else
				{
					if (2 * ((i / 100) + (i / 10-10*(i / 100)) + (i % 10)) == n && ((j % 10) * 100 + (j / 10 - 10 * (j / 100)) * 10 + j / 100) == i)
						cout << i * 1000 + j << endl;
				}
			}
		}
	}
	//system("pause");
	return 0;
}*/ 

#include<iostream>
using namespace std;

int main()
{
	int n;cin>>n;
	for(int a=0;a<=9;a++)
	for(int b=0;b<=9;b++)
	for(int c=0;c<=9;c++)
	for(int d=0;d<=9;d++)
	for(int e=0;e<=9;e++)
	for(int f=0;f<=9;f++)
	{
		if(!a)
		{
			if(b!=f||c!=e||!b)	continue;
			else if((b+c+d+e+f)==n)
			cout<<b<<c<<d<<e<<f<<endl;
		}
		else if(a!=f||b!=e||c!=d)
			continue;
		else if((a+b+c+d+e+f)==n)
		cout<<a<<b<<c<<d<<e<<f<<endl;
	}
	return 0;
} 
