#include<iostream>
using namespace std;

int main()
{
	int yy;cin>>yy;bool tag=false;
	if((yy%4==0 && yy%100!=0) || yy%400==0)
	tag=true;
	if(tag)
	cout<<"yes"<<endl;
	else
	cout<<"no"<<endl;
	return 0;
}
