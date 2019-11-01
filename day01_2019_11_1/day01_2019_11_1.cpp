// day01_2019_11_1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


#include <iostream>
#include <iostream>
using namespace std;

int main()
{
	cout << "----------输出菱形---------";
	int i, j, k;

	for (i = 0; i < 4; i++)
	{
		for (k = 0; k < 4 - i; k++)
		{
			cout << " ";

		}
		for (j = 0; j < 7 - 2 * (3 - i); j++)
		{
			cout << "*";
		}

		cout << "\n";
	}
	for (i = 0; i < 3; i++)
	{
		for (k = 0; k < i + 2; k++)
		{
			cout << " ";
		}
		for (j = 0; j < 7 - 2 * (1 + i); j++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	cout << "有3个整数a,b,c，由键盘输入，输出其中最大的数" << endl;
	int a, b, c;
	cin >> a >> b >> c;
	if (a > b&& a > c)
	{
		cout << a << endl;
	}
	if (b > a&& b > c)
	{
		cout << b << endl;
	}
	if (c > a&& c > b)
	{
		cout << c << endl;

	}

	int e;
	int sum = 0;

	cout << "求自然数1~10之和" << endl;
	for (e = 1; e < 11; e++)
	{
		sum += e;
	}
	cout << sum << endl;

	cout << "输入一个整数,将各位数字反转后输出" << endl;
	for (;;)
	{

	}




}
