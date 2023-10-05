//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
///*
//帮主抓到了一个别的帮派的卧底，仁慈的帮主给了卧底一条生路，
//让卧底设计个程序才可以离开,程序中需要回答帮主m次的询问，
//每次帮主会问[1,n]范围内第x个质数是几？程序需要快速输出结果
//趁帮主不在的时候卧底求助与你，请你帮忙设计这个程序,输入输出格式如下：
//
//输入格式
//    第一行包含两个正整数 n, m，分别表示 查询的范围 和 查询次数 。
//    接下来 m 行,每行一个正整数 x，表示待查询的第 x 个质数。
//    (1 <= n <= 10^5)  (1 <= m <= 10^5)  保证查询的x在有效范围内
//输出格式
//    输出 n 行，每行一个正整数表示答案
//*/
//
//
//int main() {
//
//    bool is_prime[100001] = { 0 };
//    int arr[100001] = { 0 };
//
//    int n, m; //n 查询的范围   m 询问次数
//    cin >> n >> m;
//
//    for (int i = 2; i <= n; i++)
//    {
//        is_prime[i] = true;
//    }
//
//    for (int i = 2; i * i <= n; i++)
//    {
//        if (is_prime[i])
//        {
//            for (int j = i * i; j <= n; j += i)
//            {
//                is_prime[j] = false;
//            }
//        }
//    }
//
//    int index = 0;
//    for (int i = 2; i <= n; i++)
//    {
//        if (is_prime[i])
//        {
//            arr[index] = i;
//            index++;
//        }
//    }
//
//    for (int i = 0; i < m; i++)
//    {
//        int num;
//        cin >> num;
//
//        cout << "第 " << num << "个质数是： " << arr[num - 1] << endl;
//    }
//
//
//	system("pause");
//	return EXIT_SUCCESS;
//}