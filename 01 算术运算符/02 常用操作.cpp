#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//1取数位
void test01()
{
	int n;
	cin >> n;

	cout << "个位： " << n % 10 << endl;
	cout << "十位： " << (n / 10) % 10 << endl;
	cout << "十位： " << n % 100 / 10 << endl;
	cout << "百位： " << n / 100 << endl;

}

//2 数位和
void test02()
{
	int n;
	cin >> n;

	int sum = 0; 

	while (n)
	{
		sum += n % 10;  //取个位
		 
		n /= 10;   //去个位
	}

	cout << "数位之和为： " << sum << endl;
}


//3 反转数字
void test03()
{
	int n;
	cin >> n;

	int sum = 0;

	while (n)
	{
		sum = sum * 10 + n % 10;
		n /= 10; 
	}

	cout << "反转后的数字为： " << sum << endl;
}


int main() {

	test03();

	system("pause");
	return EXIT_SUCCESS;
}