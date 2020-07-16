#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int a[11] = { -1,3,6,-5,4,0,-1,3,2,4,3 };
	int rear, front;
	rear = 10; front = 0;
	int s;
	while (rear > front)
	{
		while (a[front] < 0)
			front++;
		while (a[rear] > 0)
			rear++;
		if (a[front] == 0 || a[rear] == 0)
		{
			if (a[front] == 0)
			{
				s = a[front];
				a[front] = a[int((rear + front) / 2)];
				a[int((rear + front) / 2)] = s;
				//front++;
			}
			if (a[rear] == 0)
			{
				s = a[rear];
				a[rear] = a[int((rear + front) / 2)];
				a[int((rear + front) / 2)] = s;
				//rear++;
			}
		}
		else
		{
			s=a[front];
			a[front] = a[rear];
			a[rear] = s;
			front++;
			rear++;
		}
	}
	system("pause");
	return 0;
}