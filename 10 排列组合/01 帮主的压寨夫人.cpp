#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

/*
������n��ѹկ���ˣ�����ò���绨�������ֵ��ǵ��۹��ǲ�ͬ�ģ�
���ڰ�����֪���ļ���ѹկ�����Ǵ�ҹ��ϵ���Ů����˸���һ��ͶƱ��
ÿ����������mƱ���涨mƱ��ҪͶ����Ͷ����ͬ�ĺ�ѡ�ˣ�
����ÿ�����ж����ֵ�ͶƱ������

�����ʽ��
	��һ�����룬���������� n (5 <= n <= 50) ��  m( 1 <= m <= 5) 
	��ʾ��ѡ������ �� ����Ʊ��
�����ʽ��
	һ����������ʾͶƱ��������
*/




int main() {

	int n = 0; 
	int m = 0; 
	cin >> n >> m;

	long long count = 1;

	// ���ӣ�  (n-0) * (n-1) * (n-2)* ... *( n- ( m-1))
	// ��ĸ��    1   *   2   *   3  * ... * m

	for (int i = 0; i < m; i++)
	{
		count *= n - (long long )i;
		count /= 1 + (long long )i;
	}

	cout << count << endl;

	system("pause");
	return EXIT_SUCCESS;
}