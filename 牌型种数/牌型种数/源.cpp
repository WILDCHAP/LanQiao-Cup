#include<iostream>
#include<stdlib.h>
using namespace  std;

int ans = 0,sum=0;

/*void dfs(int n)
{
	if (n > 13)  //����Ƴ�����Χ
		return;
	if (n == 13)   //����Ѿ��������һ����
	{
		if(sum==13)   //����Ƶ�����Ϊ13����֤�����������
			ans++;
		return;
	}
	for(int i=0;i<=4;i++)  //һ���Ƶ������0��1��2��3��4
	{
		sum = sum + i; //һ���ƶ�һ������������Ƶ������ͼ�һ
		dfs(n + 1);   //����һ���ƿ�ʼ����
		sum = sum - i;//�������
	}
}*/

void dfs(int type, int sum)  //type�����ͣ�sum������
{
	if (sum > 13)  //����Ƶ���������13��������˲�����
		return;    
	if (type == 13)
	{
		if (sum == 13)   //�����ǰ���㣨1.�Ƶ�����Ϊ13��2.�����ѵ������һ���ƣ����������û���ֵ������һ���ƣ�ͬ������
			ans++;
		return;
	}
	for (int i = 0; i <= 4; i++)
	{
		dfs(type + 1, sum + i);  //ÿ���Ƶ�������ǰ������һ���������i��4����
	}
}

int main()
{
	dfs(0,0);
	cout << ans << endl;
	system("pause");
	return 0;
}