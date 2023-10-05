//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
////1 阶乘
//void test01()
//{
//	//求n的阶乘
//	int  n;
//	cin >> n;
//
//	long long res = 1;
//
//	for (int i = 1; i <= n; i++)
//	{
//		res *= i;
//	}
//
//	cout << n << "! = " << res << endl;
//}
//
////2 阶乘的第二种解法
//void test02()
//{
//	//求n的阶乘
//	int n;
//	cin >> n;
//
//	long long arr[100] = { 0 };
//
//	arr[0] = 1;
//
//	// 利用下标 保存对应的数字 阶乘的结果
//	for (int i = 1; i <= n; i++)
//	{
//		arr[i] = arr[i - 1] * i;
//	}
//
//	cout << n << "! = " << arr[n] << endl;
//}
//
//int main() {
//
//	test02();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}