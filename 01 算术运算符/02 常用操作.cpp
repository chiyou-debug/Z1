#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//1ȡ��λ
void test01()
{
	int n;
	cin >> n;

	cout << "��λ�� " << n % 10 << endl;
	cout << "ʮλ�� " << (n / 10) % 10 << endl;
	cout << "ʮλ�� " << n % 100 / 10 << endl;
	cout << "��λ�� " << n / 100 << endl;

}

//2 ��λ��
void test02()
{
	int n;
	cin >> n;

	int sum = 0; 

	while (n)
	{
		sum += n % 10;  //ȡ��λ
		 
		n /= 10;   //ȥ��λ
	}

	cout << "��λ֮��Ϊ�� " << sum << endl;
}


//3 ��ת����
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

	cout << "��ת�������Ϊ�� " << sum << endl;
}


int main() {

	test03();

	system("pause");
	return EXIT_SUCCESS;
}