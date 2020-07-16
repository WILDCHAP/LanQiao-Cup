#include<iostream>
#include<math.h>
using namespace std;
typedef struct{
	int x,y;
}point;
typedef struct{
	point data[3];
}sanjiao;
sanjiao a;
double zc()
{
	return sqrt(a.data[])
}
void zx()
{
	point b;b.x=b.y=0;
	for(int i=0;i<3;i++){
		b.x+=a.data[i].x;
		b.y+=a.data[i].y;
	}
	b.x/=3;b.y/=3;
	return b;
}
int main()
{
	for(int i=0;i<3;i++)
	cin>>a.data[i].x>>a.data[i].y;
	printf("%.2f\n%.2f\n",zc(),mj());
	return 0;
} 
