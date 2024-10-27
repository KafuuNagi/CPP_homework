#include <iostream>
using namespace std;
int main()
{
	cout << "请输入三边长，中间使用空格：";
	int a, b, c, m;
	cin >> a >> b >> c;

	if (a > b) {
		m = a;
		a = b;
		b = m;
	}
	if (a > c) {
		m = a;
		a = c;
		c = m;
	}
	if (b > c) {
		m = b;
		b = c;
		c = m;
	}//第一题的代码，将abc升序排列

	if (a + b > c) {
		cout << "这是一个三角形，且";
		if (a * a + b * b == c * c)
			cout << "这是一个直角三角形";
		else if (a == b && b == c)
			cout << "这是一个等边三角形";
		else
			cout << "这是一个一般三角形";
	}
	else
		cout << "这不是一个三角形";
	return 0;
}
