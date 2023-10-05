#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;

//公因数
void test01()
{
	int a = 0;
	int b = 0;

	cin >> a >> b;

	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			cout << i << endl;
		}
	}
}

//最大公因数
void test02()
{
	int a = 0;
	int b = 0; 
	int max_val = 0; //最大公因数

	cin >> a >> b;

	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			if (i > max_val)
			{
				max_val = i;
			}
		}
	}

	cout << a << " 与 " << b << "最大公因数为： " << max_val << endl;
}


void test03()
{
	int a = 0;
	int b = 0;
	int max_val = 0;

	cin >> a >> b;

	max_val = min(a, b);
	
	for (int i = max_val; i >= 1; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			max_val = i;
			break;
		}
	}
	cout << a << " 与 " << b << "的最大公因数为：" << max_val << endl;
}

int main() {

	test03();

	system("pause");
	return EXIT_SUCCESS;
}