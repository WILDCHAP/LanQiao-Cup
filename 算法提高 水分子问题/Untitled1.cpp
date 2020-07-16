#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;

int main()
{
	double n;cin>>n;
	double k=n*950.0/(3.0*pow(10,-23));
	printf("%.6E",k);
	return 0;
} 
