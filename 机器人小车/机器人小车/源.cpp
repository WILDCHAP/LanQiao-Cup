#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
	double len;			//����ԭ�ؾ���
	int x = 0, y = 0;
	int now = 1;		//��ǵ�ǰ״̬
	char a[100];		//��¼�켣
	cin >> a;
	int i;
	for (i = 0; i < strlen(a); i++)
	{
		int j = 0;
		if (a[i] == 'L')		//����
		{
			if (now == 1)
				now = 2;
			else if (now == 2)
				now = 4;
			else if (now == 4)
				now = 3;
			else if (now == 3)
				now = 1;
		}
		else if (a[i] == 'R')	//����
		{
			if (now == 1)
				now = 3;
			else if (now == 2)
				now = 1;
			else if (now == 4)
				now = 2;
			else if (now == 3)
				now = 4;
		}
		if (a[i] >= '0' && a[i] <= '9')		//���������
		{
			while (a[i] >= '0' && a[i] <= '9')			//��ȡ�������
			{
				j = j * 10 + a[i] - '0';
				i++;
			}
			i--;
			switch (now)
			{
			case 1:
				y += j;
				break;
			case 2:
				x -= j;
				break;
			case 3:
				x += j;
				break;
			case 4:
				y -= j;
				break;
			}
		}
	}
	len = sqrt((x*x + y*y));
	printf("%.2f\n", len);
	system("pause");
	return 0;
}