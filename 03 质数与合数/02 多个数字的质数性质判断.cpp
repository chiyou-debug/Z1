//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
///*
//�ж�n������m���Ƿ�Ϊ����������(1 <= n <= 1000) ( 2 <= m <= 1000000000 )
//
//�����ʽ:
//    ���������У���һ����һ������ n����ʾ��Ҫ�жϵ����ֵĸ���
//    ���������� n �����֣���ʾ��Ҫ�ж���ֵ m
//�����ʽ��
//    ����� n �У�ÿ�������Ӧm�Ƿ�Ϊ����������ǣ����  "����" ��
//    ������� "����"
//*/
//
//void test01()
//{
//    int n;  //�жϴ���
//    int m;  //�жϵ�����
//
//    cin >> n;
//
//    for (int i = 1; i <= n; i++)
//    {
//        //�ж� m �Ƿ�Ϊ����
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
//            cout << "����" << endl;
//        }
//        else
//        {
//            cout << "����" << endl;
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