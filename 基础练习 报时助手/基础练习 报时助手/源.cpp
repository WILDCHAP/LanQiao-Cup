/*��������
����������ǰ��ʱ�䣬����Ӣ�ĵĶ���������������
����ʱ����ʱh�ͷ�m��ʾ����Ӣ�ĵĶ����У���һ��ʱ��ķ����ǣ�
�������mΪ0����ʱ��������Ȼ����ϡ�o'clock������3:00������three o'clock����
�������m��Ϊ0����ʱ��������Ȼ�󽫷ֶ���������5:30������five thirty����
����ʱ�ͷֵĶ���ʹ�õ���Ӣ�����ֵĶ���������0~20������
����0:zero, 1: one, 2:two, 3:three, 4:four, 5:five, 6:six, 7:seven, 8:eight, 9:nine, 10:ten, 11:eleven, 12:twelve, 13:thirteen, 14:fourteen, 15:fifteen, 16:sixteen, 17:seventeen, 18:eighteen, 19:nineteen, 20:twenty��
����30����thirty��40����forty��50����fifty��
�������ڴ���20С��60�����֣����ȶ���ʮ������Ȼ���ټ��ϸ�λ������31���ȶ�30�ټ�1�Ķ�����������thirty one����
����������Ĺ���21:54������twenty one fifty four����9:07������nine seven����0:15������zero fifteen����
�����ʽ
����������������Ǹ�����h��m����ʾʱ���ʱ�ͷ֡����������ǰû��ǰ��0��hС��24��mС��60��
�����ʽ
�������ʱ��ʱ�̵�Ӣ�ġ�
��������
0 15
�������
zero fifteen*/

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
char hh[100];
char h[21][12] = { "zero","one", "two",  "three", "four",  "five",  "six", "seven","eight","nine", "ten", "eleven","twelve","thirteen",
"fourteen", "fifteen","sixteen","seventeen","eighteen","nineteen","twenty" }, ht[6][12] = { "ten","twenty","thirty","forty","fifty" };

void displayh(int hour)
{
	if (hour <= 20)
		cout << h[hour];
	else
	{
		if (hour % 10 != 0)
			cout << ht[(hour / 10)-1] << ' ' << h[hour % 10];
		else
		{
			cout << ht[hour / 10];
		}
	}
}

void displaym(int min)
{
	if (min <= 20)
		cout << h[min];
	else
	{
		if (min % 10 != 0)
			cout << ht[(min / 10)-1] << ' ' << h[min % 10];
		else
			cout << ht[min / 10];
	}
}

int main()
{
	int hour, min;
	cin >> hour >> min;
	if (min == 0)
	{
		displayh(hour);
		cout << " o'clock";
	}
	else
	{
		displayh(hour);
		cout << ' ';
		displaym(min);
	}
	system("pause");
	return 0;
}