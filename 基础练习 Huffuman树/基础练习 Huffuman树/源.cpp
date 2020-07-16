/*问题描述
　　Huffman树在编码中有着广泛的应用。在这里，我们只关心Huffman树的构造过程。
　　给出一列数{pi}={p0, p1, …, pn-1}，用这列数构造Huffman树的过程如下：
　　1. 找到{pi}中最小的两个数，设为pa和pb，将pa和pb从{pi}中删除掉，然后将它们的和加入到{pi}中。这个过程的费用记为pa + pb。
　　2. 重复步骤1，直到{pi}中只剩下一个数。
　　在上面的操作过程中，把所有的费用相加，就得到了构造Huffman树的总费用。
　　本题任务：对于给定的一个数列，现在请你求出用该数列构造Huffman树的总费用。

　　例如，对于数列{pi}={5, 3, 8, 2, 9}，Huffman树的构造过程如下：
　　1. 找到{5, 3, 8, 2, 9}中最小的两个数，分别是2和3，从{pi}中删除它们并将和5加入，得到{5, 8, 9, 5}，费用为5。
　　2. 找到{5, 8, 9, 5}中最小的两个数，分别是5和5，从{pi}中删除它们并将和10加入，得到{8, 9, 10}，费用为10。
　　3. 找到{8, 9, 10}中最小的两个数，分别是8和9，从{pi}中删除它们并将和17加入，得到{10, 17}，费用为17。
　　4. 找到{10, 17}中最小的两个数，分别是10和17，从{pi}中删除它们并将和27加入，得到{27}，费用为27。
　　5. 现在，数列中只剩下一个数27，构造过程结束，总费用为5+10+17+27=59。
输入格式
　　输入的第一行包含一个正整数n（n<=100）。
　　接下来是n个正整数，表示p0, p1, …, pn-1，每个数不超过1000。
输出格式
　　输出用这些数构造Huffman树的总费用。
样例输入
5
5 3 8 2 9
样例输出
59*/
#include<iostream>
#include<stdlib.h>
using namespace std;
int a[1000];

void KP(int left, int right)
{
	if (left < right)
	{
		int i = left, j = right;
		a[0] = a[left];
		do
		{
			while (a[j] < a[0] && i<j)	j--;
			if (i < j)
			{
				a[i] = a[j];
				i++;
			}
			while (a[i] > a[0] && i < j)	i++;
			if (i < j)
			{
				a[j] = a[i];
				j--;
			}
		} while (i != j);
		a[i] = a[0];
		KP(left, i - 1);
		KP(i + 1, right);
	}
}

int main()
{
	int N;
	cin >> N;
	int i, k = 0, b[100], sum = 0;
	for (i = 1; i <= N; i++)
		cin >> a[i];
	i--;
	while (i != 1)
	{
		KP(1, i);
		b[k++]=a[i - 1] = a[i - 1] + a[i];
		i = i - 1;
	}
	for (i = 0; i < k; i++)
		sum += b[i];
	cout << sum;
	system("pause");
	return 0;
}