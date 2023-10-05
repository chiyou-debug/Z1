#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

void test01()
{
    float m = 0.2;
    float n = 0.6;
    float t = m + n;
    if (t == 0.8) {
        cout << "==" << endl;
    }
    else {
        cout << "!=" << endl;
    }
}

void test02()
{
    double a = 0.111;
    double b = 0.666;
    double c = b - a * 5;
    if (c == a) {
        cout << "==" << endl;
    }
    else {
        cout << "!=" << endl;
    }
}


void test03()
{
    const double ERROR = 1e-6;

    double a = 0.111;
    double b = 0.666;
    double c = b - a * 5;

    if (fabs(c - a) < ERROR)
    {
        cout << "==" << endl;
    }
    else
    {
        cout << "!=" << endl;
    }
}

int main() {

    test03();

	system("pause");
	return EXIT_SUCCESS;
}