/*问题描述
　　Tom教授正在给研究生讲授一门关于基因的课程，有一件事情让他颇为头疼：一条染色体上有成千上万个碱基对，它们从0开始编号，到几百万，几千万，甚至上亿。
　　比如说，在对学生讲解第1234567009号位置上的碱基时，光看着数字是很难准确的念出来的。
　　所以，他迫切地需要一个系统，然后当他输入12 3456 7009时，会给出相应的念法：
　　十二亿三千四百五十六万七千零九
　　用汉语拼音表示为
　　shi er yi san qian si bai wu shi liu wan qi qian ling jiu
　　这样他只需要照着念就可以了。
　　你的任务是帮他设计这样一个系统：给定一个阿拉伯数字串，你帮他按照中文读写的规范转为汉语拼音字串，相邻的两个音节用一个空格符格开。
　　注意必须严格按照规范，比如说“10010”读作“yi wan ling yi shi”而不是“yi wan ling shi”，“100000”读作“shi wan”而不是“yi shi wan”，“2000”读作“er qian”而不是“liang qian”。
输入格式
　　有一个数字串，数值大小不超过2,000,000,000。
输出格式
　　是一个由小写英文字母，逗号和空格组成的字符串，表示该数的英文读法。
样例输入
1234567009
样例输出
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
			if (i != (l - 1) && a[i + 1] != '0' && !(l - i == 1 || l - i == 5 || l - i == 9))			//当遇到零是判断他的下一位是否也是零，多个零只输出一个零
				cout << "ling ";
		}
		else
			if ((l - i == 2 || l - i == 6 || l - i == 10) && j == 1 &&a[i-1]!='0')		//判断当数字为1又是十位/十万位/十亿位的情况
			{
				cout << "shi ";
				if (a[i + 1] == '0')		//判断数字为1后一位(个位/万位/亿位)又是0的情况，同上，也只输出“shi”
					cout << c[l - i - 1] << ' ';
			}
			else									//其他情况，输出它的数字和对应位权(十/百/千/万)
			{
				cout << b[j] << ' ' << c[l - i] << ' ';
				if ((l - i == 2 || l - i == 6 || l - i == 10) && a[i + 1] == '0')		//判断数字为1后一位(个位/万位/亿位)又是0的情况，同上，也只输出“shi”
					cout << c[l - i - 1] << ' ';
			}
	}
	system("pause");
	return 0;
}*/

//第二次做 
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
	for(i=k-1;i>=0;i--)		//逆序 
	a[temp++]=b[i]-'0';a[10]=0;
	for(i=k-1;i>=0;i--)
	{
		if(a[i]==0)	//只输出一个ling 
		{
			if(i!=(k-1)&&a[i-1]!=0&&i!=8&&i!=4&&i!=0)
			cout<<"ling ";
		}
		else if((i==9||i==5||i==1)&&a[i]==1&&(i==(k-1)||(!a[i+1]&&!a[i+2])))//十位
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
