#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double max(int k, int w)
{
	int n;	//��¼һ��һ������λ��
	n = w / k;	//nΪ��λ��ȡ���λ��,
	int m;
	m = w%k;	//mΪ���ʣ�µĸ�λ,�����λ����ȡ��
	if (n<2)
		return -1;	//���С����λ�����ش���
	int z = 2, num = 0;	double sum = 0.0;	//����λ����ʼ��sum�����������������num�������浱ǰ��λ���
	int a[100];			//����һ����������
	int d = 0, dd;						//�����±�
	while (z <= n)		//������ȫ����
	{
		int y = 1;		//���λ��1��ʼ			���λ��y  ��ǰλ��:z
		while ((pow(2, k) - z) >= y)	//��ǰλ���������
		{
			if (z == 2)
			{
				a[y - 1] = pow(2, k) - y - 1;		//��ֵд��������
				sum = sum + (pow(2, k) - y - 1);
			}
			else
			{
				d++; num = 0;
				for (dd = d; dd<(pow(2, k) - 2); dd++)
					num = num + a[dd];
				sum = sum + num;
				//printf("%.0f\n",sum);
			}
			y++;
		}
		z++;		//�����굱ǰλ��
	}
	int i = 1;
	while (i <= m)			//����ʣ�ಿ��
	{
		d++; num = 0;
		for (dd = d; dd<(pow(2, k) - 2); dd++)
			num = num + a[dd];
		sum = sum + num;
		i++;
	}
	return sum;
}

int main()
{
	int k, w;
	double n;
	printf("������k��w��");
	scanf("%d%d", &k, &w);
	n = max(k, w);
	printf("һ����%.0f�����\n", n);
	system("pause");
	return 0;
}