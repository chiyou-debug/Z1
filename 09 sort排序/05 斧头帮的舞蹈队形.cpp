#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;

/*
��Ŀ������
��ͷ���ܲ��ͷֲ�Ҫ������ϵĺ�������������Ϊ�˷���˽��������
��������һ������,�ܹ���n���ˣ��������������ܲ�����k�ˣ��Ұ�����Էֲ���
�� n - k ����

�ܲ����˰������ �ӵ͵��� ���У��ֲ����˰������ �Ӹߵ��� ���У�
������Ƹ�������������赸����
*/

struct members {
	string name; //����
	int height;  //���
};

//�Ӹߵ���
bool cmp1(members m1, members m2)
{
	return m1.height > m2.height;
}

//�ӵ͵���
bool cmp2(members m1, members m2)
{
	return m1.height < m2.height;
}

int main() {

	members arr[100];

	int n = 0; //�ܹ�����
	int k = 0; //�ܲ���������

	cin >> n >> k; 

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].name >> arr[i].height;
	}

	sort(arr, arr + k , cmp1);
	sort(arr + k, arr + n ,cmp2);

	cout << "�ܲ����Σ� " << endl;
	for (int i = 0; i < k; i++)
	{
		cout << "������ " << arr[i].name << " \t ��ߣ� " << arr[i].height << endl;
	}

	cout << endl << "�ֲ����Σ� " << endl;
	for (int i = k; i < n; i++)
	{
		cout << "������ " << arr[i].name << " \t ��ߣ� " << arr[i].height << endl;
	}


	system("pause");
	return EXIT_SUCCESS;
}