#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	for (int N1 = 1; N1 <= 20; N1++)
	{
		/*if (N1 == 20)
			int m = 0;*/
		for (int N2 = 1; N2 < 20; N2++)
		{
			if (N2 >= N1)
				continue;
			for (int N3 = 1; N3 < 20; N3++)
			{
				if (N3 >= N2)
					continue;
				for (int N4 = 1; N4 < 20; N4++)
				{
					if (N4 >= N3)
						continue;
					/*if (N1 == 20 && N2 == 5 && N3 == 4 && N4 == 2)
						int ll;*/
					if ((N2*N3*N4+N1*N3*N4+N1*N2*N4+N1*N2*N3)==(N1*N2*N3*N4))
						cout << "开始：" << N1 << " 第一轮：" << N2 << " 第二轮：" << N3 << " 第三轮：" << N4 << endl;
				}
			}
		}
	}
	system("pause");
	return 0;
}