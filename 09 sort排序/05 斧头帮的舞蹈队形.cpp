#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;

/*
题目描述：
斧头帮总部和分部要在年会上的合作表演跳舞活动，为了方便私下排练，
帮主想了一个队形,总共有n个人，其中左半边来自总部，共k人，右半边来自分部，
共 n - k 个人

总部的人按照身高 从低到高 排列，分部的人按照身高 从高到低 排列，
请你设计个程序完成最终舞蹈队形
*/

struct members {
	string name; //姓名
	int height;  //身高
};

//从高到低
bool cmp1(members m1, members m2)
{
	return m1.height > m2.height;
}

//从低到高
bool cmp2(members m1, members m2)
{
	return m1.height < m2.height;
}

int main() {

	members arr[100];

	int n = 0; //总共人数
	int k = 0; //总部来的人数

	cin >> n >> k; 

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].name >> arr[i].height;
	}

	sort(arr, arr + k , cmp1);
	sort(arr + k, arr + n ,cmp2);

	cout << "总部队形： " << endl;
	for (int i = 0; i < k; i++)
	{
		cout << "姓名： " << arr[i].name << " \t 身高： " << arr[i].height << endl;
	}

	cout << endl << "分部队形： " << endl;
	for (int i = k; i < n; i++)
	{
		cout << "姓名： " << arr[i].name << " \t 身高： " << arr[i].height << endl;
	}


	system("pause");
	return EXIT_SUCCESS;
}