#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;

//int main()
//{
//	int sum = 0;
//	for (int a = 2; a <= 9; a++)
//	{
//		for (int b = 0; b <= 9; b++)
//		{
//			if (a == b || b==1) continue;
//			for (int c = 0; c <= 9; c++)
//			{
//				if (a == c || b == c || c==1) continue;
//				for (int d = 0; d <= 9; d++)
//				{
//					if (a == d || b == d || c == d || d==1) continue;
//					for (int e = 0; e <= 9; e++)
//					{
//						if (a == e || b == e || c == e || d == e || e==1) continue;
//						for (int f = 0; f <= 9; f++)
//						{
//							if (a == f || b == f || c == f || d == f || e == f || f==1) continue;
//							for (int g = 0; g <= 9; g++)
//							{
//								if (a == g || b == g || c == g || d == g || e == g || f == g || g==1) continue;
//								int t1 = a * 1000 + b * 100 + c * 10 + d;
//								int t2 = 1000 + e * 100 + f * 10 + b;
//								int t = 10000 + e * 1000 + c * 100 + b * 10 + g;
//								if (t1 + t2 == t)
//									cout << "1" << e << f << b << endl;
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}

int main()
{
	int num[9] = { 0,2,3,4,5,6,7,8,9 }, i = 0,t2[10];
	do
	{
		int t1 = num[0] * 1000 + num[1] * 100 + num[2] * 10 + num[3];
		t2[i] = 1000 + num[4] * 100 + num[5] * 10 + num[1];
		int t = 10000 + num[4] * 1000 + num[2] * 100 + num[1] * 10 + num[6];
		if (t1 + t2[i] == t)
		{
			if (i!=0 && t2[i]==t2[i-1]) 
			{
				continue;
			}
			cout << t2[i] <<  endl;
			i++;
			//cout << "1" << num[4] << num[5] << num[1] << endl;
		}	
	}while (next_permutation(num, num + 9));
	system("pause");
	return 0;
}