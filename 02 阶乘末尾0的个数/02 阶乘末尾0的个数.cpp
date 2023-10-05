#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//阶乘末尾0的个数
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

	int num = 0; //统计0的个数

	while (res % 10 == 0)
	{
		num++;  //统计0
		res /= 10; //去除个位
	}

	cout << n << "! 末尾0的个数为： " << num << endl;
}

void test02()
{

	int n;
	cin >> n;

	int temp = 0;
	int num = 0; //统计末尾0的个数

	for (int i = 1; i <= n; i++)
	{
		temp = i;
		while (temp % 5 == 0)
		{
			num++;
			temp /= 5;
		}
	}

	cout << n << "! 末尾0的个数为： " << num << endl;
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

	cout << n << "! 末尾0的个数为： " << num << endl;
}

void test04()
{
	int n;
	cin >> n;

	int num = 0; //末尾0的个数统计

	while (n)
	{
		num += n / 5;
		n /= 5;
	}

	cout << n << "! 末尾0的个数为： " << num << endl;
}


int main() {
	test04();


	system("pause");
	return EXIT_SUCCESS;
}