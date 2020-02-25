#include<iostream>
#include<string>
using namespace std;

class student                                                           //定义学生的类
{ 
	int num;
	string name;
	int age;
public:
	student() { num = 0; name = '\0'; age = 0; }
	student(int, string, int);                                          //构造函数
	void set();                                                         //设置和取值函数
	void show();                                                        //打印函数
};

student::student(int a,string b,int c):num(a), name(b), age(c) {}       //构造函数的实现
void student::set()
{ 
	cout << "输入学号、姓名、年龄：" << endl;
	cin >> num>>name>>age;
	while (1)
	{
		if (num >= 0 && num <= 100 || age >= 0 && age <= 100) break;
		else
		{
			cout << "数据类型错误，请重新输入：";
			cin >> num >> name >> age;
		}
	}
}
void student::show()
{
	cout << "student number:" << ends << num << endl;
	cout << "student name:" << ends << name << endl;
	cout << "student age:" << ends << age << endl;
}
int main()                                                             //主函数
{
	student s1;
	s1.set();
	s1.show();
	student s2;
	s2.set();
	s2.show();
	return 0;
}