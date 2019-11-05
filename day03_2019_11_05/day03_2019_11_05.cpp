// day03_2019_11_05.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//结构体
struct structname 
{

};

//类 类是对象的模板，对象是类的实例
class ClassName 
{
	//属性 定义变量 只是声明，不赋值


};
#include <iostream>
#include <string>
#include<cstring>
using namespace std;

//class Person
//{
//	//protected:受保护的
//	//private:私有的（默认）
//private://这些访问权限都是对外的，对于类内而言，没有限制
//		//对于字符数组的输入赋值，一般使用strcpy(stu.name,"zs");
//	char name[50];
//	int age;
//	string addr;
//public:
//	void fun();
//	void f();
//};//绿色标志不是严重错误，只是提示


class Person
{
private:
	char name[50];
	int age;
	string addr;
public:
	//构造函数，不手动添加则类会默认生成，构造函数可以有多个，无参构造，有参构造
	Person()
	{
		cout << "调用构造函数\n";
	}
	Person(string name1,int age,string addr) {
		this->addr = addr;
		this->age = age;
		strcpy(name,name1);
	}
	//析构函数 没有参数
	~Person()
	{
		cout << "销毁时调用析构函数\n";
	}

};

//void Person::fun()//加两个冒号，表明属于类域的方法
//{
//	cin >> addr;
//}
//
//void Person::f() {
//	cout << addr;
//}

int main()
{
	//实例化对象
	Person stu("zyb",18,"shijiazhuang");
	Person stu1;//每创建一次对象就会自动调用构造函数和析构函数
	//struct可以，因为struct默认权限是公有的，但是class默认是私有的,会报错
	//strcpy(stu.name, "zs");
	//cout << stu.name;
	/*stu.fun();
	stu.f();*/

	return 0;
}

