#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<time.h>
using namespace std;

int main()
{
	int n = 0;
	for(int e=1;e<=9;e++)
		for (int f = 0; f <= 9; f++)					
			for (int g = 0; g <= 9; g++)					
				for (int h = 0; h <= 9; h++)					
					for (int i = 0; i <= 9; i++)
					{
						if (4 == e || 4 == f || 4 == g || 4 == h || 4 == i)
							continue;
						n++;
					}
	cout << n << endl;
	system("pause");
	return 0;
}

//int main()
//{
//	clock_t time, time1 = clock();
//	char a[10] = {'0','1','2','3','4','5','6','7','8','9'};
//	//a[0] = 1; a[1] = 2; a[2] = 3;
//	do
//	{
//		cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << " " << a[5] << " " << a[6] << " " << a[7] << " " << a[8] << " " << a[9] << endl;
//	} while (next_permutation(a, a + 10));
//	time = clock() - time1;
//	cout << "³ÌÐòÓÃÊ±£º" << (double)time / 1000 << endl;
//	system("pause");
//	return 0;
//}