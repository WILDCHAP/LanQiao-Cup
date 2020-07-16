#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int* y = (int*)malloc(rank*rank*sizeof(int));  // МоїХ
	for (int i = 0; i<rank * rank; i++)
	{
		y[_________________________] = x[i];  // МоїХ
	}

	for (i = 0; i<rank*rank; i++)
	{
		x[i] = y[i];
	}

	free(y);
	system("pause");
	return 0;
}

/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int N;
	scanf("%d", &N);
	int num[100], i, j, k, z;
	for (i = 0; i < N; i++)
		scanf("%d", &num[i]);
	for (i = 0; i < N; i++)
	{
		k = i;
		for (j = i + 1; j < N; j++)
		{
			if (num[j] > num[k])
				k = j;
			if (k != i)
			{
				z = num[i];
				num[i] = num[k];
				num[k] = z;
			}
		}
	}
	printf("min=%d\n", num[N-1]);
	system("pause");
	return 0;
}*/



/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	double eps;
	scanf("%1e", &eps);
	double num = 1.0, n = 1.0;
	int i, k = 1;
	double fz = 1.0, fm = 1.0;
	while (n > eps)
	{
		k++;
		fz = 1.0; fm = 1.0;
		for (i = 1; i<k; i++)
		{
			fz = fz*i;
			fm = fm*(2 * i + 1);
		}
		n = fz / fm;
		num = num + n;
	}
	num = 2 * num;
	printf("PI=%.5f\n", num);
	system("pause");
	return 0;
}*/