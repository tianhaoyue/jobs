// day02_demo1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
#include <cstring>
#include <string>

class Box
{
private:
	float len;
	float width;
	float height;

public:
	void size();
	Box(float len, float width,float height) {
		this->len = len;
		this->width = width;
		this->height = height;
	}
};

void Box:: size() {
	float size;
	size = len * width * height;
	cout << size;
}

int main()
{
	Box b1(1.0,2.0,3.0);
	Box b2(1.5, 2.5, 3.5);
	b1.size();
	cout << endl;
	b2.size();
}

