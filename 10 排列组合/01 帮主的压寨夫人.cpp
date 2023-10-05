#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

/*
帮主有n个压寨夫人，各个貌美如花，但是兄弟们的眼光是不同的，
现在帮主想知道哪几个压寨夫人是大家公认的美女，因此搞了一波投票，
每个人手里有m票，规定m票都要投满且投给不同的候选人，
请问每个人有多少种的投票方案？

输入格式：
	共一行输入，两个正整数 n (5 <= n <= 50) 和  m( 1 <= m <= 5) 
	表示候选人总数 和 手里票数
输出格式：
	一个整数，表示投票方案数量
*/




int main() {

	int n = 0; 
	int m = 0; 
	cin >> n >> m;

	long long count = 1;

	// 分子：  (n-0) * (n-1) * (n-2)* ... *( n- ( m-1))
	// 分母：    1   *   2   *   3  * ... * m

	for (int i = 0; i < m; i++)
	{
		count *= n - (long long )i;
		count /= 1 + (long long )i;
	}

	cout << count << endl;

	system("pause");
	return EXIT_SUCCESS;
}