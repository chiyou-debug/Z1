#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<iomanip>
using namespace std;

/*
�����㵽һ�Ųر�ͼ����������˺ܶ�ı��ص�λ�ã��Ը�ͷ���ܲ�Ϊԭ�㣬
�����Ķ����ҿ������ÿ���ر�λ�õĺ�����������꣬����׼����������
�ܲ�������Ǹ����أ��������һ�������ҵ�����ı��ص�

�����ʽ
    ��һ������һ�������� ( 1 <= n <= 100),��ʾ�ر��������
    ����������n�У�ÿ������������������ a �� b ��ʾ������������ꡣ (-5000 <= a �� b <= 5000)
�����ʽ
    ������ܲ�����ĵ�ĺ����ꡢ�����ꡢ����ľ��루���������2λС����
*/

double dis(double x, double y)
{
    double res = sqrt(pow(x, 2) + pow(y, 2));

    return res;
}


int main() {

    int n = 0; //�������
    cin >> n;

    double a = 0;
    double b = 0;
    double min = 8000;
    double min_x = 6000;
    double min_y = 6000;

    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        double res = dis(a, b);
        if (res < min)
        {
            min = res;
            min_x = a;
            min_y = b;
        }
    }

    cout << fixed << setprecision(2) << "x = " << min_x << " y = " 
         << min_y << " dis = " << min << endl;


	system("pause");
	return EXIT_SUCCESS;
}