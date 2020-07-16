#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
using namespace std;

int main()
{
	char num[100] = { '1' };		//字符数组用来储存2^63，先初始第一位为1,num[0]=1;
	int i = 0, t = 0, n, n2;				//t:进位
	for(i=1;i<65;i++)
	{
		n = strlen(num);			//字符数组长度
		for (int j = 0; j < n; j++)
		{
			n2 = num[j] - '0';					//先保存该位数
			num[j] = (n2 * 2 + t) % 10 + '0';	//在用该位数的两倍加上上一位的进位的个位位置取代
			t = (n2 * 2 + t) / 10;				//保存进位
		}
		if (t != 0)								//若最高位存在进位
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