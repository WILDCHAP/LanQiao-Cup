//1
#include<stdio.h>
#include<stdlib.h>
#define max 100
typedef int datatype;
typedef struct {
	datatype a[max];
	int size;
}sequence_list;
void nulllist(sequence_list *l)
{
	l->size = 0;
}
void input(sequence_list *l, int n)
{
	l->size = n;
	datatype x;
	int i = 0;
	while (x != 0 && i<l->size)
	{
		scanf("%d", &x);
		l->a[i] = x;
		i++;
	}
}
void output(sequence_list *l)
{
	int i = 0;
	if (l->size == 0)
	{
		printf("list is null!!\n");
		exit(1);
	}
	for (i = 0; i<l->size; i++)
	{
		printf("%d", l->a[i]);
	}
}
void add(sequence_list *l, datatype x)
{
	int i = 0;
	int j;
	while (i<l->size && x<l->a[i])
	{
		i++;
	}
	if (i == l->size)
	{
		l->a[l->size] = x;
		l->size++;
	}
	else
		for (j = l->size; j>i; j--)
		{
			l->a[j] = l->a[j - 1];
		}
	l->a[i] = x;
	l->size++;
}
void del(sequence_list *l, int n)
{
	if (n>l->size || n<0)
	{
		printf("out of bound \n");
		exit(1);
	}
	int i;
	for (i = n; i <= l->size; i++)
	{
		l->a[i - 1] = l->a[i];
	}
	l->size--;
}
void find1(sequence_list *l, datatype x)
{
	int i = 0;
	int flag = 0;
	while (i<l->size)
	{
		if (l->a[i] == x)
		{
			printf("地%d个元素为所查", &i);
			flag++;
		}
		i++;
	}
	if (flag == 0)
		printf("no the number\n");
	else
		printf("have %d number\n", &flag);
}
void find2(sequence_list *l, int n)
{
	if (n>l->size || n<0)
	{
		printf("out of bound\n");
		exit(1);
	}
	else
		printf("%5d", l->a[n - 1]);
}
int main()
{
	sequence_list *l;
	nulllist(l);
	input(l, 7);
	output(l);
	add(l, 4);
	del(l, 8);
	find1(l, 1);
	find2(l, 2);
	return 0;
}


