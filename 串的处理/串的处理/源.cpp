#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main()
{
	char a[100], ch;
	int l = 0;
	while ((ch = getchar()) != '\n')
	{
		a[l++] = ch;
	}
	a[l] = '\0';
	int len = strlen(a);
	int i;
	for (i = 0; i < len; i++)
	{
		if (i != 0 && a[i] == 32)
		{
			int j = i, k,f;
			while (a[j] == 32 && j < len)
				j++;
			f = j - i - 1;
			for (j,k=0; j < len; j++,k++)
				a[i+1+k] = a[j];
			len = len - f;
		}
		if ((a[i] >= 'A' && a[i] <= 'Z') && i!=0)
		{
			if (a[i - 1] != 32)
				a[i] = a[i] + 32;
		}
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			if (i == 0)
				a[i] = a[i] - 32;
			else if (a[i - 1] != '_' && !(a[i - 1] >= 'A' && a[i - 1] <= 'Z') && !(a[i-1] >= 'a' && a[i-1] <= 'z'))
				a[i] = a[i] - 32;
		}
		if (a[i] >= '0' && a[i] <= '9')
		{
			if (i != 0 && (a[i - 1] != 32 && !(a[i-1] >= '0' && a[i-1] <= '9')) && a[i-1]!='_')
			{
				for (int z = len; z > i; z--)
					a[z] = a[z - 1];
				a[i] = '_';
				len++;
			}
			if (a[i + 1] != 32 && !(a[i + 1] >= '0' && a[i + 1] <= '9') &&a[i+1]!='_')
			{
				i++;
				for (int m = len; m > i; m--)
					a[m] = a[m - 1];
				a[i] = '_';
				len++;
			}
		}
	}
	cout << a << endl;
	system("pause");
	return 0;
}