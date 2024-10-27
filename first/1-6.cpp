#include <iostream>
using namespace std;
int main()
{
	cout << "请输入一个数字:";
	int num;
	//是否只输出了一个结果
	bool only = true;
	cin >> num;
	if (num % 3 == 0 || 
		num % 5 == 0 ||
		num % 7 == 0) {
		cout << "这个数能被";

		if (num % 3 == 0) {
			//如果是第一个数先输出顿号
			if (!only)
				cout << "、";
			cout << "3";
			/*将only设置为false，说明不是
			第一个了*/
			only = false;
		}
		if (num % 5 == 0) {
			if (!only)
				cout << "、";
			cout << "5";
			only = false;
		}
		if (num % 7 == 0) {
			if (!only)
				cout << "、";
			cout << "7";
			only = false;
		}
		cout << "整除";
	}
	else
		cout << "这个数不能被3、5、7整除";

	return 0;
}
