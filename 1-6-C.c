#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	printf("请输入一个数字:");
	int num,condition;
	condition = 0;
	//是否只输出了一个结果

	scanf("%d",&num);
	if (num % 3 == 0 || 
		num % 5 == 0 ||
		num % 7 == 0) {
		printf("这个数能被");

		if (num % 3 == 0) {
			//如果是第一个数先输出顿号
			printf("%s3", condition == 1 ? "、" : "");
			condition = 1;
		}
		if (num % 5 == 0) {
			printf("%s5", condition == 1 ? "、" : "");
			condition = 1;
		}
		if (num % 7 == 0) {
			printf("%s7", condition == 1 ? "、" : "");
			condition = 1;
		}
		printf("整除");
	}
	else
		printf("这个数不能被3、5、7整除");

	return 0;
}