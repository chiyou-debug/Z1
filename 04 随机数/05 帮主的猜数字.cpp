#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

/*
年底要开年会了，帮主为了犒劳本帮派的所有弟兄们，搞了一个猜数字的环节，
帮主找到你帮忙设计一下这个程序，游戏规则如下：

-   猜出系统生成的随机数，游戏开始有选择难度的提示
-   游戏分为3个难度：简单、中等、困难
-   简单难度，程序随机生成一个两位数
-   中等难度，程序随机生成一个三位数
-   困难难度，程序随机生成一个四位数
-   玩家有10次猜测的机会，猜错系统会提示猜大了或猜小了
-   如果猜对，做出相应提示，简单获得100元，中等获得1万元，困难带薪休假1年，并结束游戏
-   10次机会用尽，提示游戏结束

输入格式
	第一行一个正整数select,代表玩家选择的难度。
	接下来输入val进行猜测。
输出格式
	根据玩家猜测的结果，提示不同的信息
*/


void menu()
{
	cout << "请选择游戏难度： " << endl;
	cout << "1、简单(两位数)" << endl;
	cout << "2、中等(三位数)" << endl;
	cout << "3、困难(四位数)" << endl;
}

int main() {

	//设置随机数种子
	srand((unsigned int)time(NULL));

	int select = 0;
	int random = 0;

	//1、产生随机数
	
	bool flag = true;
	while (flag) {

		menu();

		cout << "请输入您的选择： " << endl;
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
			//cout << "标志位： " << cin.fail() << endl;
			break;
		default:
			cout << "输入有误，请重新输入： " << endl;
			system("pause");
			system("cls");

			//重置标志位
			cin.clear();

			//刷新缓冲区
			cin.sync();
			
			char buf[1024] = { 0 };
			cin.getline(buf, sizeof(buf));

			//cout << "标志位： " << cin.fail() << endl;

			break;
		}
	}

	
	bool win = false; //猜测结果
	//cout << random << endl;

	//2、玩家猜测
	int val = 0;
	for (int i = 0; i < 10; i++)
	{
		cout << "请输入数字进行猜测： " << endl;
		cout << "您还有 《 " << 10 - i << " 》次机会" << endl;

		cin >> val;

		if (random == val)
		{
			win = true;
			break;
		}
		else if (random > val)
		{
			cout << "很遗憾，您猜小了" << endl;
		}
		else
		{
			cout << "很遗憾，您猜大了" << endl;
		}
	}



	//3、结果提示
	if (win)
	{
		cout << "恭喜您，您猜对了~" << endl;
		if (select == 1)
		{
			cout << "您获得了100元奖励！" << endl;
		}
		else if (select == 2)
		{
			cout << "您获得了1万元奖励！" << endl;
		}
		else 
		{
			cout << "您可以带薪休假1年，明白不用上班了！" << endl;
		}
	}
	else
	{
		cout << "机会用尽，来年继续加油吧" << endl;
	}
	cout << "游戏结束" << endl;

	system("pause");
	return EXIT_SUCCESS;
}