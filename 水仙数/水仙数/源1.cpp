//#include<iostream>
//#include<windows.h>
//using namespace std;
//
////value[i][j][k]为数字i的21次方出现j次的值(即i^21 * j)，其中k为该值的长度
//char value[10][22][22] = { "000000000000000000000","000000000000000000000","000000000000000000000","000000000000000000000","000000000000000000000","000000000000000000000","000000000000000000000","000000000000000000000","000000000000000000000","000000000000000000000","000000000000000000000","000000000000000000000","000000000000000000000","000000000000000000000","000000000000000000000","000000000000000000000","000000000000000000000","000000000000000000000","000000000000000000000","000000000000000000000","000000000000000000000","000000000000000000000",
//"000000000000000000000","000000000000000000001","000000000000000000002","000000000000000000003","000000000000000000004","000000000000000000005","000000000000000000006","000000000000000000007","000000000000000000008","000000000000000000009","000000000000000000010","000000000000000000011","000000000000000000012","000000000000000000013","000000000000000000014","000000000000000000015","000000000000000000016","000000000000000000017","000000000000000000018","000000000000000000019","000000000000000000020","000000000000000000021",
//"000000000000000000000","000000000000002097152","000000000000004194304","000000000000006291456","000000000000008388608","000000000000010485760","000000000000012582912","000000000000014680064","000000000000016777216","000000000000018874368","000000000000020971520","000000000000023068672","000000000000025165824","000000000000027262976","000000000000029360128","000000000000031457280","000000000000033554432","000000000000035651584","000000000000037748736","000000000000039845888","000000000000041943040","000000000000044040192",
//"000000000000000000000","000000000010460353203","000000000020920706406","000000000031381059609","000000000041841412812","000000000052301766015","000000000062762119218","000000000073222472421","000000000083682825624","000000000094143178827","000000000104603532030","000000000115063885233","000000000125524238436","000000000135984591639","000000000146444944842","000000000156905298045","000000000167365651248","000000000177826004451","000000000188286357654","000000000198746710857","000000000209207064060","000000000219667417263",
//"000000000000000000000","000000004398046511104","000000008796093022208","000000013194139533312","000000017592186044416","000000021990232555520","000000026388279066624","000000030786325577728","000000035184372088832","000000039582418599936","000000043980465111040","000000048378511622144","000000052776558133248","000000057174604644352","000000061572651155456","000000065970697666560","000000070368744177664","000000074766790688768","000000079164837199872","000000083562883710976","000000087960930222080","000000092358976733184",
//"000000000000000000000","000000476837158203125","000000953674316406250","000001430511474609375","000001907348632812500","000002384185791015625","000002861022949218750","000003337860107421875","000003814697265625000","000004291534423828125","000004768371582031250","000005245208740234375","000005722045898437500","000006198883056640625","000006675720214843750","000007152557373046875","000007629394531250000","000008106231689453125","000008583068847656250","000009059906005859375","000009536743164062500","000010013580322265625",
//"000000000000000000000","000021936950640377856","000043873901280755712","000065810851921133568","000087747802561511424","000109684753201889280","000131621703842267136","000153558654482644992","000175495605123022848","000197432555763400704","000219369506403778560","000241306457044156416","000263243407684534272","000285180358324912128","000307117308965289984","000329054259605667840","000350991210246045696","000372928160886423552","000394865111526801408","000416802062167179264","000438739012807557120","000460675963447934976",
//"000000000000000000000","000558545864083284007","001117091728166568014","001675637592249852021","002234183456333136028","002792729320416420035","003351275184499704042","003909821048582988049","004468366912666272056","005026912776749556063","005585458640832840070","006144004504916124077","006702550368999408084","007261096233082692091","007819642097165976098","008378187961249260105","008936733825332544112","009495279689415828119","010053825553499112126","010612371417582396133","011170917281665680140","011729463145748964147",
//"000000000000000000000","009223372036854775808","018446744073709551616","027670116110564327424","036893488147419103232","046116860184273879040","055340232221128654848","064563604257983430656","073786976294838206464","083010348331692982272","092233720368547758080","101457092405402533888","110680464442257309696","119903836479112085504","129127208515966861312","138350580552821637120","147573952589676412928","156797324626531188736","166020696663385964544","175244068700240740352","184467440737095516160","193690812773950291968",
//"000000000000000000000","109418989131512359209","218837978263024718418","328256967394537077627","437675956526049436836","547094945657561796045","656513934789074155254","765932923920586514463","875351913052098873672","984770902183611232881" };
//
///*10个大数求和*/
//
//void add(char* A0, char* A1, char* A2, char* A3, char* A4, char* A5, char* A6, char* A7, char* A8, char* A9, char* ans)
//{
//	int a0[22] = { 0 }, a1[22] = { 0 }, a2[22] = { 0 }, a3[22] = { 0 }, a4[22] = { 0 }, a5[22] = { 0 }, a6[22] = { 0 }, a7[22] = { 0 }, a8[22] = { 0 }, a9[22] = { 0 };
//	int p = 20;
//
//	/*倒序 & 转换*/
//
//	for (int q = 0; q <= 20; q++, p--)
//	{
//		a0[q] = A0[p] - '0';
//		a1[q] = A1[p] - '0';
//		a2[q] = A2[p] - '0';
//		a3[q] = A3[p] - '0';
//		a4[q] = A4[p] - '0';
//		a5[q] = A5[p] - '0';
//		a6[q] = A6[p] - '0';
//		a7[q] = A7[p] - '0';
//		a8[q] = A8[p] - '0';
//		a9[q] = A9[p] - '0';
//	}
//
//	int w = 0;  //低位到高位的进位
//	char* b = new char[22];
//	for (p = 0; p <= 20; p++)
//	{
//		int temp = a0[p] + a1[p] + a2[p] + a3[p] + a4[p] + a5[p] + a6[p] + a7[p] + a8[p] + a9[p] + w;
//		b[p] = temp % 10 + '0';
//		w = temp / 10;
//	}
//	if (w != 0)  //说明ans有22位，不符合
//	{
//		ans[0] = '0';
//		ans[1] = '\0';
//		return;
//	}
//
//	for (p = 20; w <= 20; w++)
//		ans[w] = b[p--];  //ans可能不足21位
//	ans[w] = '\0';
//	return;
//}
//
///*判断ans内各个数字出现的次数 是否与 枚举各个数字时每个数字出现的次数分别相同*/
//
//bool judge(int i0, int i1, int i2, int i3, int i4, int i5, int i6, int i7, int i8, int i9, char* ans)
//{
//	int time[10] = { 0 };  //ans各个数字出现的次数
//
//	for (int i = 0; i <= 20; i++)
//		time[ans[i] - '0']++;
//
//	if (time[0] == i0 && time[1] == i1 && time[2] == i2 && time[3] == i3 && time[4] == i4 &&
//		time[5] == i5 && time[6] == i6 && time[7] == i7 && time[8] == i8 && time[9] == i9)
//		return true;
//
//	return false;
//}
//
//int main(void)
//{
//	int time = GetTickCount();
//	char ans[22];
//
//	/*枚举数字0~9出现的次数*/
//
//	for (int i9 = 0; i9 <= 9; i9++)
//	{
//		for (int i0 = 0; i0 <= 20; i0++)
//		{
//			if (i0 + i9 == 21)
//			{
//				add(value[0][i0], value[1][0], value[2][0], value[3][0], value[4][0], value[5][0], value[6][0], value[7][0], value[8][0], value[9][i9], ans);
//				if (ans[0] != '0' && judge(i0, 0, 0, 0, 0, 0, 0, 0, 0, i9, ans))  //ans[0]!='0'保证ans为21位
//					cout << ans << endl;
//				break; //剪枝，此后枚举的 各个数字出现次数之和必定大于21
//			}
//			for (int i1 = 0; i1 <= 21; i1++)
//			{
//				if (i0 + i1 + i9 == 21)
//				{
//					add(value[0][i0], value[1][i1], value[2][0], value[3][0], value[4][0], value[5][0], value[6][0], value[7][0], value[8][0], value[9][i9], ans);
//					if (ans[0] != '0' && judge(i0, i1, 0, 0, 0, 0, 0, 0, 0, i9, ans))
//						cout << ans << endl;
//					break;
//				}
//				for (int i2 = 0; i2 <= 21; i2++)
//				{
//					if (i0 + i1 + i2 + i9 == 21)
//					{
//						add(value[0][i0], value[1][i1], value[2][i2], value[3][0], value[4][0], value[5][0], value[6][0], value[7][0], value[8][0], value[9][i9], ans);
//						if (ans[0] != '0' && judge(i0, i1, i2, 0, 0, 0, 0, 0, 0, i9, ans))
//							cout << ans << endl;
//						break;
//					}
//					for (int i3 = 0; i3 <= 21; i3++)
//					{
//						if (i0 + i1 + i2 + i3 + i9 == 21)
//						{
//							add(value[0][i0], value[1][i1], value[2][i2], value[3][i3], value[4][0], value[5][0], value[6][0], value[7][0], value[8][0], value[9][i9], ans);
//							if (ans[0] != '0' && judge(i0, i1, i2, i3, 0, 0, 0, 0, 0, i9, ans))
//								cout << ans << endl;
//							break;
//						}
//						for (int i4 = 0; i4 <= 21; i4++)
//						{
//							if (i0 + i1 + i2 + i3 + i4 + i9 == 21)
//							{
//								add(value[0][i0], value[1][i1], value[2][i2], value[3][i3], value[4][i4], value[5][0], value[6][0], value[7][0], value[8][0], value[9][i9], ans);
//								if (ans[0] != '0' && judge(i0, i1, i2, i3, i4, 0, 0, 0, 0, i9, ans))
//									cout << ans << endl;
//								break;
//							}
//							for (int i5 = 0; i5 <= 21; i5++)
//							{
//								if (i0 + i1 + i2 + i3 + i4 + i5 + i9 == 21)
//								{
//									add(value[0][i0], value[1][i1], value[2][i2], value[3][i3], value[4][i4], value[5][i5], value[6][0], value[7][0], value[8][0], value[9][i9], ans);
//									if (ans[0] != '0' && judge(i0, i1, i2, i3, i4, i5, 0, 0, 0, i9, ans))
//										cout << ans << endl;
//									break;
//								}
//								for (int i6 = 0; i6 <= 21; i6++)
//								{
//									if (i0 + i1 + i2 + i3 + i4 + i5 + i6 + i9 == 21)
//									{
//										add(value[0][i0], value[1][i1], value[2][i2], value[3][i3], value[4][i4], value[5][i5], value[6][i6], value[7][0], value[8][0], value[9][i9], ans);
//										if (ans[0] != '0' && judge(i0, i1, i2, i3, i4, i5, i6, 0, 0, i9, ans))
//											cout << ans << endl;
//										break;
//									}
//									for (int i7 = 0; i7 <= 21; i7++)
//									{
//										if (i0 + i1 + i2 + i3 + i4 + i5 + i6 + i7 + i9 == 21)
//										{
//											add(value[0][i0], value[1][i1], value[2][i2], value[3][i3], value[4][i4], value[5][i5], value[6][i6], value[7][i7], value[8][0], value[9][i9], ans);
//											if (ans[0] != '0' && judge(i0, i1, i2, i3, i4, i5, i6, i7, 0, i9, ans))
//												cout << ans << endl;
//											break;
//										}
//										for (int i8 = 0; i8 <= 21; i8++)
//										{
//											if (i0 + i1 + i2 + i3 + i4 + i5 + i6 + i7 + i8 + i9 == 21)
//											{
//												add(value[0][i0], value[1][i1], value[2][i2], value[3][i3], value[4][i4], value[5][i5], value[6][i6], value[7][i7], value[8][i8], value[9][i9], ans);
//												if (ans[0] != '0' && judge(i0, i1, i2, i3, i4, i5, i6, i7, i8, i9, ans))
//													cout << ans << endl;
//												break;
//											}
//										} //i8
//									} //i7
//								} //i6
//							} //i5
//						} //i4
//					} //i3
//				} //i2
//			} //i1
//		} //i0
//	} //i9
//	cout << "Run Time : " << GetTickCount() - time << "ms" << endl;
//	return 0;
//}