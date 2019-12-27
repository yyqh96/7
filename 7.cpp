#include<stdio.h>
int main()
{
	int r;
	printf("请输入半径r：");
	while (~scanf_s("%d", &r))
	{
		if (r > 0)
		{
			printf("此圆的面积是：%f\n", 2 * 3.1415 * r * r);
		}
		else if (r == 0) {
			return 0;
		}
		else
		{
			printf("输入的半径不合法！\n");
		}
	}
	return 0;
}