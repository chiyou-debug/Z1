//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
////1 �׳�
//void test01()
//{
//	//��n�Ľ׳�
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
////2 �׳˵ĵڶ��ֽⷨ
//void test02()
//{
//	//��n�Ľ׳�
//	int n;
//	cin >> n;
//
//	long long arr[100] = { 0 };
//
//	arr[0] = 1;
//
//	// �����±� �����Ӧ������ �׳˵Ľ��
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