//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
///*
//����һ�������� N����Χ�� 2 ��1000000000 ֮�䡣������ N ������ʱ��
//���  "����" ��������� "����"��
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
//		cout << "����" << endl;
//	}
//	else
//	{
//		cout << "����" << endl;
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
//		cout << "����" << endl;
//	}
//	else
//	{
//		cout << "����" << endl;
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