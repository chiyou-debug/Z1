//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
///*
//��ͷСѧ��ĩ���Գɼ������ˣ����㰴�ճɼ��Ӹߵ��׽�������
//���ѧ���������Լ����Գɼ�
//
//�����ʽ��
//    ��һ��һ������n (1 <= n <= 100),����μӿ��Ե�������
//    ������n�У�ÿ������һ���ַ�����һ��������������ѧ�������Ϳ��Գɼ�
//�����ʽ��
//    �Ӹߵ������ѧ���������Լ����Գɼ�
//
//*/
//
//
//struct Student {
//    string name; //����
//    int score;   //����
//};
//
//bool cmp(Student s1 ,Student s2)
//{
//    //���շ�������
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
//        cout << "������ " << stu[i].name << " ������ " << stu[i].score << endl;
//    }
//
//	system("pause");
//	return EXIT_SUCCESS;
//}