#include<stdio.h>
#include<stdlib.h>
//#include<math.h>

int main()
{
	char num[10];
	for (int num1 = 100; num1 < 1000; num1++)
	{
		int num2 = num1*num1;
		itoa(num2, num, 10);
		int i = 10;
		while (num[i]!='\0')
			i--;
		if (((num[i-1] - '0') + (10 * (num[i-2] - '0')) + (100 * (num[i-3] - '0'))) == num1)
			printf("%d\n", num1);
	}
	system("pause");
}