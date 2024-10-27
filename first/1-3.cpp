#include <iostream>
//标准间房价，方便后期修改
#define BASIC 398
using namespace std;

int main()
{
	//月份，房间数，价格
	int months, rooms;
	double price;//涉及浮点数计算
	cout << "请输入月份和预定房间数（均用数字表示），";
	cout << "中间请使用空格隔开" << endl;
	cin >> months >> rooms;
	//确保输入的结果在范围内
	if (months >= 1 && months <= 12 && rooms > 0) {
		//旺季
		if (months >= 7 && months <= 9) {
			if (rooms >= 20)
				price = BASIC * rooms * 0.7;
			else
				price = BASIC * rooms * 0.85;
		}
		//淡季
		else {
			if (rooms >= 20)
				price = BASIC * rooms * 0.5;
			else
				price = BASIC * rooms * 0.7;
		}
		cout << "每日应收钱数为" << price << "元";
	}
	else
		cout << "请输入正确的结果！";
	return 0;
}
