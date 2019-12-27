#include<stdio.h>
int main()
{
 int r;
 printf("请输入r：");
while(~scanf_s("%d",&r))
{
	if(r>0)
	printf("面积是：%f\n",2*3.1415*r*r);
	else
	printf("输入的r不合法！\n");
}
 return 0;
}