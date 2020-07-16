#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 500

int display(int n)
{
	int k = n;
	int sum = 1, num;
	int niu[MAXSIZE] = { 0 };
	niu[0] = 4;
	while (k != 0)
	{
		num = sum;
		for (int z = 0; z < num; z++)
		{
			niu[z]++;
			if (niu[z] >= 4)
			{
				sum++;
				niu[sum - 1] = 0;
			}
		}
		k--;
	}
	return sum-1;
}

int main()
{
	int n;
	scanf("%d",&n);
	while (n!=0)
	{
		//printf("ÇëÊäÈëÄêÊı£º");
		printf("\n%d\n", display(n));
		scanf("%d", &n);
	}
	system("pause");
	return 0;
}