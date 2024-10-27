#include <iostream>
using namespace std;
int main()
{
	cout << "请输入三个整数,程序将按升序输出这三个数：" << endl;
	int a, b, c;//三个整数对应的变量
	int m;//中间变量,用于临时储存数据
	cin >> a >> b >> c;

	if (a > b) {
		m = a;//把a赋值到中间变量中
		a = b;//把b赋值给新的"a"
		b = m;//把原本a的值赋值给b，完成a和b的交换
	}
	if (a > c) {
		m = a;//与第一种情况同理
		a = c;
		c = m;
	}
	if (b > c) {
		m = b;
		b = c;
		c = m;
	}
	cout << a << " " << b << " "<< c;
	return 0;
}
