#include <iostream>
using namespace std;
int main()
{
	cout << "请输入一个四位整数：" << endl;
	int num;
	cin >> num;

	int n1, n2, n3, n4;//分别对应各位上的数；
	n1 = num / 1000;//千位上的数；
	n2 = (num / 100) % 10;/*百位上的数，先除以一百，
	得到千位和百位，再通过求余计算，得到百位；*/
	n3 = (num / 10) % 10;//同理
	n4 = num % 10;//个位就是剩下来的余数；

	if (n1 == n4 && n2 == n3)//逻辑与
		cout << "您输入的是回文数";
	else
		cout << "您输入的不是回文数";
	return 0;
}
