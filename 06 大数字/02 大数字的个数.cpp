#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string>
using namespace std;

int main() {

	string s; //�洢������
	cin >> s;

	//ɾ����λ0
	while (s.find("0") == 0)
	{
		//����replace ��ɾ��
		s.replace(0, 1, "");
	}

	int nums[10] = { 0 };

	for (int i = 0; i < s.size(); i++)
	{
		nums[s[i] - '0'] ++;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << nums[i] << " ";
	}
	cout << endl;

	system("pause");
	return EXIT_SUCCESS;
}