#include <iostream>
#define MAX 100
using namespace std;
int main()
{
	//输入的变量
	int score,prize;
	//各奖项加的分
	const int first = 10;
	const int second = 8;
	const int third = 5;
	const int forth = 2;

	cout << "请输入你现在的成绩：" << endl;
	cin >> score;
	cout << "请输入你获得的奖项，用数字表示：";
	cout << "（1:一等奖,2:二等奖,3:三等奖,4:优胜奖): " << endl;
	cin >> prize;

	if (score >= 0 && prize > 0 && prize <= 4) {
		switch (prize) {
		case 1:
			score += first;
			break;
		case 2:
			score += second;
			break;
		case 3:
			score += third;
			break;
		case 4:
			score += forth;
			break;
		}
		if (score >= MAX)
			cout << "你最终的成绩为" << MAX << "分";
		else
			cout << "你最终的成绩为" << score << "分";
	}
	else
		cout << "请输入正确的内容！";
	return 0;
}
