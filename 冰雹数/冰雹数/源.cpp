#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	int max = 0, n;
	printf("ÊäÈë: ");
	scanf("%d", &n);
	for(int j=n-1;j>1;j--)
	{
		int i = j;
		while (i != 1)
		{
			if (i > max)
				max = i;
			if (i % 2 == 0)
				i = i / 2;
			else
				i = 3 * i + 1;
		}
	}
	printf("\nÊä³ö: %d\n",max);
	system("pause");
	return 0;
}