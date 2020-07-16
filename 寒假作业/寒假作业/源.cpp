#include<stdio.h>
#include<stdlib.h>

int ans = 0;
/*int ans = 0; //方案数
int sum[13] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 }; //数字库
int de[12] = { 0 };  //已出现过的数字

void shanchu()  //删除已经出现过的数字
{
	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			if (sum[i] == de[j])  //如果相等，则删除sum中的重复数并将后面的数前移
			{
				for (int k = i; k < 13; k++)
					sum[k] = sum[k + 1];
			}
		}
	}
}

bool fond(int n1)    //寻找这个数是否在数组sum中
{
	int i=0;
	while (sum[i])
	{
		if (sum[i] == n1)
		{
			shanchu();
			return true;
		}
			
	}
	return false;
}

int fond1()
{
	if (fond(de[1] + de[2]))
		if (fond(de[4] - de[3]))
			if (fond(de[5] * de[6]))
				if (fond(de[8] / de[7]))
					return 1;
}


void text()
{
	int i = 0;
	for (de[1] = sum[0]; de[1] < sum[12]; de[1]=sum[0])
	{
		shanchu();   //删除第一个出现的数
		for (de[2] = sum[0], i = 0; sum[i++] != 0; de[2] = sum[0])
		{
			shanchu();
 			for (de[3] = sum[0], i = 0; sum[i++] != 0; de[3] = sum[0])
			{
				shanchu();
				for (de[4] = sum[0], i = 0; sum[i++] != '\0'; de[4] = sum[0])
				{
					shanchu();
					for (de[5] = sum[0], i = 1; sum[i++] != '\0'; de[5] = sum[0])
					{
						shanchu();
						for (de[6] = sum[0], i = 1; sum[i++] != '\0'; de[6] = sum[0])
						{
							shanchu();
								de[11] = de[5] * de[6];
							for (de[7] = sum[0], i = 1; sum[i++] != '\0'; de[7] = sum[0])
							{
								shanchu();
								for (de[8] = sum[0], i = 1; sum[i++] != 0; de[8] = sum[0])
								{
									shanchu();
									if (1 == fond1())
										ans++;
								}
							}
						}
					}
				}
			}
		}
	}
}*/

int main()
{
	//text();
	for (int a = 1; a <= 13; a++)
		for (int b = 1; b <= 13; b++)
		{
			if (a == b) continue;
			for (int c = 1; c <= 13; c++)
			{
				if (c == a || c == b) continue;
				for (int d = 1; d <= 13; d++)
				{
					if (d == a || d == b || d == c)continue;
					for (int e = 1; e <= 13; e++)
					{
						if (e == a || e == b || e == c || e == d) continue;
						for (int f = 1; f <= 13; f++)
						{
							if (f == a || f == b || f == c || f == d || f == e) continue;
							for (int g = 1; g <= 13; g++)
							{
								if (g == a || g == b || g == c || g == d || g == e || g == f) continue;
								for (int h = 1; h <= 13; h++)
								{
									if (h == a || h == b || h == c || h == d || h == e || h == f || h == g) continue;
									for (int i = 1; i <= 13; i++)
									{
										if (i == a || i == b || i == c || i == d || i == e || i == f || i == g || i == h) continue;
										for (int j = 1; j <= 13; j++)
										{
											if (j == a || j == b || j == c || j == d || j == e || j == f || j == g || j == h || j==i) continue;
											for (int k = 1; k <= 13; k++)
											{
												if (k == a || k == b || k == c || k == d || k == e || k == f || k == g || k == h || k == i || k==j) continue;
												for (int l = 1; l <= 13; l++)
												{
													if (l == a || l == b || l == c || l == d || l == e || l == f || l == g || l == h || l == i || l == j || l==k) continue;
													if ((a + b) == c)
														if ((d - e) == f)
															if ((g*h) == i)
																if(j%k==0)
																	if ((j / k) == l)
																	{
																		ans++; 
																		printf("%d+%d=%d\n%d-%d=%d\n%d*%d=%d\n%d/%d=%d", a, b, c,d,e,f,g,h,i,j,k,l);
																		printf("     %d\n\n", ans);
																	}	
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	printf("%d\n", ans);
	system("pause");
	return 0;
}