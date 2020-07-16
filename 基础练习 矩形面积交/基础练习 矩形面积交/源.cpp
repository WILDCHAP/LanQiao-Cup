/*问题描述
　　平面上有两个矩形，它们的边平行于直角坐标系的X轴或Y轴。对于每个矩形，我们给出它的一对相对顶点的坐标，请你编程算出两个矩形的交的面积。
输入格式
　　输入仅包含两行，每行描述一个矩形。
　　在每行中，给出矩形的一对相对顶点的坐标，每个点的坐标都用两个绝对值不超过10^7的实数表示。
输出格式
　　输出仅包含一个实数，为交的面积，保留到小数后两位。
样例输入
1 1 3 3
2 2 4 4
样例输出
1.00*/


#include<iostream>
#include<stdlib.h>
#include<stdio.h> 
using namespace std;
typedef struct {
	double x, y;
}point;
double max(int a,int b)
{
	return a>b? a:b;
}
double min(int a,int b)
{
	return a<b? a:b;
}
int main()
{
	point a1, a2, b1, b2, n1, n2;
	cin >> a1.x >> a1.y >> a2.x >> a2.y >> b1.x >> b1.y >> b2.x >> b2.y;
	n1.x = max(min(a1.x, a2.x), min(b1.x, b2.x));
	n1.y = max(min(a1.y, a2.y), min(b1.y, b2.y));
	n2.x = min(max(a1.x, a2.x), max(b1.x, b2.x));
	n2.y = min(max(a1.y, a2.y), max(b1.y, b2.y));
	if (n1.x < n2.x && n1.y < n2.y)
		printf("%.2f", (n2.x - n1.x)*(n2.y - n1.y));
	else
		printf("0.00");
	system("pause");
	return 0;
}
