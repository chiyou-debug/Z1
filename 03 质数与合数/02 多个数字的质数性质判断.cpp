//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
///*
//判断n个数字m的是否为质数，其中(1 <= n <= 1000) ( 2 <= m <= 1000000000 )
//
//输入格式:
//    输入有两行，第一行是一个整数 n，表示需要判断的数字的个数
//    接下来输入 n 个数字，表示需要判断数值 m
//输出格式：
//    输出有 n 行，每行输出对应m是否为质数，如果是，输出  "质数" ，
//    否则输出 "合数"
//*/
//
//void test01()
//{
//    int n;  //判断次数
//    int m;  //判断的数字
//
//    cin >> n;
//
//    for (int i = 1; i <= n; i++)
//    {
//        //判断 m 是否为质数
//        cin >> m;
//        bool flag = true;
//
//        for (int j = 2; j * j <= m; j++)
//        {
//            if (m % j == 0)
//            {
//                flag = false;
//                break;
//            }
//        }
//        if (flag)
//        {
//            cout << "质数" << endl;
//        }
//        else
//        {
//            cout << "合数" << endl;
//        }
//    }
//
//}
//
//int main() {
//
//    test01();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}