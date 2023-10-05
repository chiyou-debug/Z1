//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
////最小值
//void test01()
//{
//	int n; // 数字个数
//	cin >> n;
//
//	int min; //最小值
//	cin >> min; //认定第一个数字就是最小值
//
//	for (int i = 2; i <= n; i++)
//	{
//		int temp;
//		cin >> temp;
//		//后面的数字小于我认定的最小值，更新最小值
//		if (temp < min)
//		{
//			min = temp;
//		}
//	}
//
//	cout << "最小值： " << min << endl;
//}
//
////最大值
//void test02()
//{
//	int a[10] = { 19, 89, 12, 16, 90, 9, 10, 58, 10, 2 };
//	int max = a[0]; //认定第一个数字就是最大值
//
//	for (int i = 1; i < 10; i++)
//	{
//		//后面的数字如果比认定的最大值还大，更新最大值
//		if (a[i] > max)
//		{
//			max = a[i];
//		}
//	}
//	cout << "最大值： " << max << endl;
//}
//
//int main() {
//
//	test02();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}