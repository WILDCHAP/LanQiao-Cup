#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int num[100],top=0;		//����ջ 

typedef struct{		//����ջ 
	char ch[100];
	int top;
}seq_sta;
seq_sta fh;
int pd(char a,char b)		//�������ȼ���0Ϊb��a�ߣ�1Ϊ��ͬ��a��b�� 
{
	if(a=='#' || a=='(')
	return 0;
	switch (a)
	{
		case '+'||'-':
			if(b=='*' || b=='/')
				return 0;
			break;
	}
	return 1;
}
 
 void zh(char *a,char *b)
 {
 	fh.top=0;
 	int i=0,j=0;
 	fh.ch[fh.top]='#';
 	fh.top++;
 	while(i<strlen(a))
 	{
 		if(a[i]>='0' && a[i]<='9')
 			b[j++]=a[i];
 		else if(a[i]=='(')
 		{
 			fh.ch[fh.top]=a[i];fh.top++;
 		}
 		else if(a[i]==')')
 		{
 			int k=fh.top-1;
 			while(fh.ch[k]!='(')
 			{
 				b[j++]=fh.ch[k];k--;
 			}
 			fh.top=k;
 		}
 		else if(a[i]=='+' || a[i]=='-' || a[i]=='*' || a[i]=='/')
 		{
 			b[j++]=' ';
 			while(pd(fh.ch[fh.top-1],a[i])) 
			 b[j++]=fh.ch[--fh.top];
			fh.ch[fh.top]=a[i];fh.top++; 
 		}
 		i++;
 	}
 	while(fh.top!=1)
 	b[j++]=fh.ch[--fh.top];
 	b[j]='\0';
 } 
 
 int cal(char *a)			//���������ʽ 
 {
 	int i=0;
 	while(i<strlen(a))
 	{
 		if(a[i]>='0' && a[i]<='9')
 		{
 			while(a[i]>='0' && a[i]<='9')
 			{
 				num[top]=num[top]*10+a[i]-'0';
 				top++;i++;
 			}
 		}
 		else if(a[i]==' ')
 			i++;
 		else if(a[i]=='+')
 		{
 			num[top-2]=num[top-1]+num[top-2];
 			top=top-2;i++;
 		}
 		else if(a[i]=='-')
 		{
 			num[top-2]=num[top-1]-num[top-2];
 			top=top-2;i++;
 		}
 		else if(a[i]=='*')
 		{
 			num[top-2]=num[top-1]*num[top-2];
 			top=top-2;i++;
 		}
 		else if(a[i]=='/')
 		{
 			num[top-2]=num[top-1]/num[top-2];
 			top=top-2;i++;
 		}
 	}
 	return num[0];
 }
 
int main()
{
	char a[100],b[100];
	cin>>a;
	int i=0;
	for(i;i<100;i++)
		num[i]=0;
	zh(a,b);		//��������ʽת��Ϊ������ʽ 
	cout<<cal(b);		//������� 
	system("pause");
	return 0;
}
