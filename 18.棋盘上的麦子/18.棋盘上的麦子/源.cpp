#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
using namespace std;

int main()
{
	char num[100] = { '1' };		//�ַ�������������2^63���ȳ�ʼ��һλΪ1,num[0]=1;
	int i = 0, t = 0, n, n2;				//t:��λ
	for(i=1;i<65;i++)
	{
		n = strlen(num);			//�ַ����鳤��
		for (int j = 0; j < n; j++)
		{
			n2 = num[j] - '0';					//�ȱ����λ��
			num[j] = (n2 * 2 + t) % 10 + '0';	//���ø�λ��������������һλ�Ľ�λ�ĸ�λλ��ȡ��
			t = (n2 * 2 + t) / 10;				//�����λ
		}
		if (t != 0)								//�����λ���ڽ�λ
		{
			num[n + 1] = '\0';
			num[n] = '0' + t;
		}
		t = 0;
		//i++;
	}
	for (i = strlen(num) - 1; i>0; i--)
	{
		cout << num[i];
	}
	cout << endl;
	system("pause");
	return 0;
}