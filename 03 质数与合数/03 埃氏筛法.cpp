//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
//int main() {
//
//	bool is_prime[101] = { 0 };
//	for (int i = 2; i <= 100; i++)
//	{
//		is_prime[i] = true;
//	}
//
//	for (int i = 2; i * i <= 100; i++)
//	{
//		if (is_prime[i])
//		{
//			for (int j = i * i; j <= 100; j += i)
//			{
//				is_prime[j] = false;
//			}
//		}
//	}
//
//	for (int i = 2; i <= 100; i++)
//	{
//		if (is_prime[i])
//		{
//			cout << i << endl;
//		}
//	}
//
//	system("pause");
//	return EXIT_SUCCESS;
//}