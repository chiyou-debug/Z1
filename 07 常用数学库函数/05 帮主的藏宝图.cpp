#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<iomanip>
using namespace std;

/*
帮主搞到一张藏宝图，里面记载了很多的宝藏的位置，以斧头帮总部为原点，
聪明的二当家可以算出每个藏宝位置的横坐标和纵坐标，帮主准备先拿下离
总部最近的那个宝藏，请你设计一个程序，找到最近的宝藏点

输入格式
    第一行输入一个正整数 ( 1 <= n <= 100),表示藏宝点的数量
    接下来输入n行，每行有两个浮点型数据 a 和 b 表示横坐标和纵坐标。 (-5000 <= a 、 b <= 5000)
输出格式
    输出离总部最近的点的横坐标、纵坐标、最近的距离（结果均保留2位小数）
*/

double dis(double x, double y)
{
    double res = sqrt(pow(x, 2) + pow(y, 2));

    return res;
}


int main() {

    int n = 0; //点的数量
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