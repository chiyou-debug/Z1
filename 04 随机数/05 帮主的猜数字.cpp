#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

/*
���Ҫ������ˣ�����Ϊ�����ͱ����ɵ����е����ǣ�����һ�������ֵĻ��ڣ�
�����ҵ����æ���һ�����������Ϸ�������£�

-   �³�ϵͳ���ɵ����������Ϸ��ʼ��ѡ���Ѷȵ���ʾ
-   ��Ϸ��Ϊ3���Ѷȣ��򵥡��еȡ�����
-   ���Ѷȣ������������һ����λ��
-   �е��Ѷȣ������������һ����λ��
-   �����Ѷȣ������������һ����λ��
-   �����10�β²�Ļ��ᣬ�´�ϵͳ����ʾ�´��˻��С��
-   ����¶ԣ�������Ӧ��ʾ���򵥻��100Ԫ���еȻ��1��Ԫ�����Ѵ�н�ݼ�1�꣬��������Ϸ
-   10�λ����þ�����ʾ��Ϸ����

�����ʽ
	��һ��һ��������select,�������ѡ����Ѷȡ�
	����������val���в²⡣
�����ʽ
	������Ҳ²�Ľ������ʾ��ͬ����Ϣ
*/


void menu()
{
	cout << "��ѡ����Ϸ�Ѷȣ� " << endl;
	cout << "1����(��λ��)" << endl;
	cout << "2���е�(��λ��)" << endl;
	cout << "3������(��λ��)" << endl;
}

int main() {

	//�������������
	srand((unsigned int)time(NULL));

	int select = 0;
	int random = 0;

	//1�����������
	
	bool flag = true;
	while (flag) {

		menu();

		cout << "����������ѡ�� " << endl;
		cin >> select;

		switch (select)
		{
		case 1:
			random = rand() % 90 + 10; // 10 ~ 99
			flag = false;
			break;
		case 2:
			random = rand() % 900 + 100; // 100 ~ 999
			flag = false;
			break;
		case 3:
			random = rand() % 9000 + 1000; // 1000 ~ 9999
			flag = false;
			//cout << "��־λ�� " << cin.fail() << endl;
			break;
		default:
			cout << "�����������������룺 " << endl;
			system("pause");
			system("cls");

			//���ñ�־λ
			cin.clear();

			//ˢ�»�����
			cin.sync();
			
			char buf[1024] = { 0 };
			cin.getline(buf, sizeof(buf));

			//cout << "��־λ�� " << cin.fail() << endl;

			break;
		}
	}

	
	bool win = false; //�²���
	//cout << random << endl;

	//2����Ҳ²�
	int val = 0;
	for (int i = 0; i < 10; i++)
	{
		cout << "���������ֽ��в²⣺ " << endl;
		cout << "������ �� " << 10 - i << " ���λ���" << endl;

		cin >> val;

		if (random == val)
		{
			win = true;
			break;
		}
		else if (random > val)
		{
			cout << "���ź�������С��" << endl;
		}
		else
		{
			cout << "���ź������´���" << endl;
		}
	}



	//3�������ʾ
	if (win)
	{
		cout << "��ϲ�������¶���~" << endl;
		if (select == 1)
		{
			cout << "�������100Ԫ������" << endl;
		}
		else if (select == 2)
		{
			cout << "�������1��Ԫ������" << endl;
		}
		else 
		{
			cout << "�����Դ�н�ݼ�1�꣬���ײ����ϰ��ˣ�" << endl;
		}
	}
	else
	{
		cout << "�����þ�������������Ͱ�" << endl;
	}
	cout << "��Ϸ����" << endl;

	system("pause");
	return EXIT_SUCCESS;
}