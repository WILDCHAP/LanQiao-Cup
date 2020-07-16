#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int a[13] ;	//先初始为-1
	for (int z = 0; z < 13; z++)
		a[z] = -1;
	int front = 0, rear = 12;	//头尾指针
	for (int i = 1; i <= 13; i++)		//13张牌，拿了13次
	{
		if (i == 13)
		{
			a[rear] = 13;
			break;
		}
		front = rear; 
		if ((rear - 1) < 0)
			rear = 12; 
		else  rear--;		//把下面牌放上面
		while (a[rear] != -1)
		{
			if (rear < 0)
				rear = 12;
			else rear--;
		}
		a[rear] = i;				//赋值
		rear--;
		while (a[rear] != -1)
		{
			if (rear < 0)
				rear = 12;
			else rear--;						//把下面牌放桌上
		}
	}
	for (int j = 12; j >= 0; j--)
	{
		if (a[j] == 1)
			cout << "A,";
		else if (a[j] == 11)
			cout << "J,";
		else if (a[j] == 12)
			cout << "Q,";
		else if (a[j] == 13)
			cout << "K,";
		else
			cout << a[j] << ",";
	}
	cout << endl;
	system("pause");
	return 0;
}