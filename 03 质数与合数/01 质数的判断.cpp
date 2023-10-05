//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
///*
//输入一个正整数 N，范围在 2 到1000000000 之间。当数字 N 是质数时，
//输出  "质数" ，否则输出 "合数"。
//*/
//void test01()
//{
//	long long n;
//	cin >> n;
//
//	bool flag = true;
//
//	for (int i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			flag = false;
//			break;
//		}
//	}
//
//	if (flag)
//	{
//		cout << "质数" << endl;
//	}
//	else
//	{
//		cout << "合数" << endl;
//	}
//
//}
//
//
//void test02()
//{
//	long long n;
//	cin >> n;
//
//	bool flag = true;
//
//	for (int i = 2; i * i <= n; i++)
//	{
//		if (n % i == 0)
//		{
//			flag = false;
//			break;
//		}
//	}
//
//	if (flag)
//	{
//		cout << "质数" << endl;
//	}
//	else
//	{
//		cout << "合数" << endl;
//	}
//}
//
//
//int main() {
//
//
//	test02();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}