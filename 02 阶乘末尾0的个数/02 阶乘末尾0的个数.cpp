#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//�׳�ĩβ0�ĸ���
void test01()
{
	int n;
	cin >> n;

	long long res = 1;
	for (int i = 1; i <= n; i++)
	{
		res *= i;
	}
	cout << n << "! = " << res << endl;

	int num = 0; //ͳ��0�ĸ���

	while (res % 10 == 0)
	{
		num++;  //ͳ��0
		res /= 10; //ȥ����λ
	}

	cout << n << "! ĩβ0�ĸ���Ϊ�� " << num << endl;
}

void test02()
{

	int n;
	cin >> n;

	int temp = 0;
	int num = 0; //ͳ��ĩβ0�ĸ���

	for (int i = 1; i <= n; i++)
	{
		temp = i;
		while (temp % 5 == 0)
		{
			num++;
			temp /= 5;
		}
	}

	cout << n << "! ĩβ0�ĸ���Ϊ�� " << num << endl;
}


void test03()
{
	int n;
	cin >> n;

	int temp = 0;
	int num = 0;

	for (int i = 5; i <= n; i += 5)
	{
		temp = i;
		while (temp % 5 == 0)
		{
			num++;
			temp /= 5;
		}
	}

	cout << n << "! ĩβ0�ĸ���Ϊ�� " << num << endl;
}

void test04()
{
	int n;
	cin >> n;

	int num = 0; //ĩβ0�ĸ���ͳ��

	while (n)
	{
		num += n / 5;
		n /= 5;
	}

	cout << n << "! ĩβ0�ĸ���Ϊ�� " << num << endl;
}


int main() {
	test04();


	system("pause");
	return EXIT_SUCCESS;
}