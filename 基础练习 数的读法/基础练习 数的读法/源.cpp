/*��������
����Tom�������ڸ��о�������һ�Ź��ڻ���Ŀγ̣���һ������������Ϊͷ�ۣ�һ��Ⱦɫ�����г�ǧ���������ԣ����Ǵ�0��ʼ��ţ��������򣬼�ǧ���������ڡ�
��������˵���ڶ�ѧ�������1234567009��λ���ϵļ��ʱ���⿴�������Ǻ���׼ȷ��������ġ�
�������ԣ������е���Ҫһ��ϵͳ��Ȼ��������12 3456 7009ʱ���������Ӧ�����
����ʮ������ǧ�İ���ʮ������ǧ���
�����ú���ƴ����ʾΪ
����shi er yi san qian si bai wu shi liu wan qi qian ling jiu
����������ֻ��Ҫ������Ϳ����ˡ�
������������ǰ����������һ��ϵͳ������һ�����������ִ���������������Ķ�д�Ĺ淶תΪ����ƴ���ִ������ڵ�����������һ���ո���񿪡�
����ע������ϸ��չ淶������˵��10010��������yi wan ling yi shi�������ǡ�yi wan ling shi������100000��������shi wan�������ǡ�yi shi wan������2000��������er qian�������ǡ�liang qian����
�����ʽ
������һ�����ִ�����ֵ��С������2,000,000,000��
�����ʽ
������һ����СдӢ����ĸ�����źͿո���ɵ��ַ�������ʾ������Ӣ�Ķ�����
��������
1234567009
�������
shi er yi san qian si bai wu shi liu wan qi qian ling jiu*/

/*#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main()
{
	char a[100]; 
	int i, j, k, l;
	char b[20][10] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
	char c[20][10] = { "","","shi","bai","qian","wan","shi","bai","qian","yi","shi" };
	cin>>a;
	l = strlen(a);
	for (i = 0; i<l; i++) 
	{
		j = a[i] - 48;
		if (j == 0) 
		{ 
			if (i != (l - 1) && a[i + 1] != '0' && !(l - i == 1 || l - i == 5 || l - i == 9))			//�����������ж�������һλ�Ƿ�Ҳ���㣬�����ֻ���һ����
				cout << "ling ";
		}
		else
			if ((l - i == 2 || l - i == 6 || l - i == 10) && j == 1 &&a[i-1]!='0')		//�жϵ�����Ϊ1����ʮλ/ʮ��λ/ʮ��λ�����
			{
				cout << "shi ";
				if (a[i + 1] == '0')		//�ж�����Ϊ1��һλ(��λ/��λ/��λ)����0�������ͬ�ϣ�Ҳֻ�����shi��
					cout << c[l - i - 1] << ' ';
			}
			else									//�������������������ֺͶ�ӦλȨ(ʮ/��/ǧ/��)
			{
				cout << b[j] << ' ' << c[l - i] << ' ';
				if ((l - i == 2 || l - i == 6 || l - i == 10) && a[i + 1] == '0')		//�ж�����Ϊ1��һλ(��λ/��λ/��λ)����0�������ͬ�ϣ�Ҳֻ�����shi��
					cout << c[l - i - 1] << ' ';
			}
	}
	system("pause");
	return 0;
}*/

//�ڶ����� 
#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;

int main()
{
	char shuzi[10][10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	char weishu[10][10]={"","shi","bai","qian","wan","shi","bai","qian","yi","shi"};char ch,b[11];
	int a[13],k=0,i,temp=0;
	cin>>b;k=strlen(b);
	for(i=k-1;i>=0;i--)		//���� 
	a[temp++]=b[i]-'0';a[10]=0;
	for(i=k-1;i>=0;i--)
	{
		if(a[i]==0)	//ֻ���һ��ling 
		{
			if(i!=(k-1)&&a[i-1]!=0&&i!=8&&i!=4&&i!=0)
			cout<<"ling ";
		}
		else if((i==9||i==5||i==1)&&a[i]==1&&(i==(k-1)||(!a[i+1]&&!a[i+2])))//ʮλ
		{
			cout<<"shi ";
			if(a[i-1]==0)
			cout<<weishu[i-1]<<' ';
		}
		else
		{
			cout<<shuzi[a[i]]<<' '<<weishu[i]<<' ';
			if(i==5&&a[4]==0)
			cout<<"wan ";
			if(i==6&&a[5]==0&&a[4]==0)
			cout<<"wan ";
			if(i==7&&a[6]==0&&a[5]==0&&a[4]==0)
			cout<<"wan ";
		}
	}
	return 0;
}
