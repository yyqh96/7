#include<stdio.h>
int main()
{
 int r;
 printf("������r��");
while(~scanf_s("%d",&r))
{
	if(r>0)
	printf("����ǣ�%f\n",2*3.1415*r*r);
	else
	printf("�����r���Ϸ���\n");
}
 return 0;
}