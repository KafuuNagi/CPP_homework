#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	printf("请输入一个数字:");
	int num;
	bool condition = true;
	//是否只输出了一个结果

	cin >> num;
	if (num % 3 == 0 || 
		num % 5 == 0 ||
		num % 7 == 0) {
		cout << "这个数能被";

		if (num % 3 == 0) {
			//如果是第一个数先输出顿号
			printf("%s3", condition == false ? "、" : "");
			condition = false;
		}
		if (num % 5 == 0) {
			printf("%s5", condition == false ? "、" : "");
			condition = false;
		}
		if (num % 7 == 0) {
			printf("%s7", condition == false ? "、" : "");
			condition = false;
		}
		cout << "整除";
	}
	else
		cout << "这个数不能被3、5、7整除";

	return 0;
}