//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
///*
//斧头小学期末考试成绩出来了，请你按照成绩从高到底进行排序，
//输出学生的姓名以及考试成绩
//
//输入格式：
//    第一行一个整数n (1 <= n <= 100),代表参加考试的总人数
//    接下来n行，每行输入一个字符串和一个正整数，代表学生姓名和考试成绩
//输出格式：
//    从高到低输出学生的姓名以及考试成绩
//
//*/
//
//
//struct Student {
//    string name; //姓名
//    int score;   //分数
//};
//
//bool cmp(Student s1 ,Student s2)
//{
//    //按照分数降序
//    return s1.score > s2.score;
//}
//
//int main() {
//
//    Student stu[100];
//
//    int n = 0; 
//    cin >> n;
//
//    for (int i = 0; i < n; i++)
//    {
//        cin >> stu[i].name >> stu[i].score;
//    }
//
//    sort(stu, stu + n, cmp);
//
//    for (int i = 0; i < n; i++)
//    {
//        cout << "姓名： " << stu[i].name << " 分数： " << stu[i].score << endl;
//    }
//
//	system("pause");
//	return EXIT_SUCCESS;
//}