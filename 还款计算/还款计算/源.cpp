#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
	double yy, year;	//������
	int n;				//����
	double x=10000.0;				//����
	int y;				//������Ϣ
	cin >> year;
	yy = 0.01*year;
	cin >> n;
	int k=1;				//ÿ�»�����,��Сʱ�临�ӶȴӼ��費Ҫ��Ϣ��ʼ
	double min=1000000;						//���һ����ʣ�£���������Ǯ
	while (1)
	{
		for (int i = 1; i <= n; i++)		//�ӵ�һ���¿�ʼ��һֱ����n����
		{
			x = ((12 + yy) / 12)*x - k*0.01;
		}
		if (abs(x) < abs(min))					//ÿ��ȡ����ֵ��Сֵ
		{
			min = x;
			k = k + 1;
		}
		else if (abs(x) > abs(min))
			break;
		//else if (abs(x) == abs(min))
		//{
		//	k--;
		//	break;
		//}
		x = 10000;
	}
	k--;
	cout << k << endl;
	system("pause");
	return 0;
}