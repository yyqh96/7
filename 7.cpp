#include<stdio.h>
int main()
{
	int r;
	printf("������뾶r��");
	while (~scanf_s("%d", &r))
	{
		if (r > 0)
		{
			printf("��Բ������ǣ�%f\n", 2 * 3.1415 * r * r);
		}
		else if (r == 0) {
			return 0;
		}
		else
		{
			printf("����İ뾶���Ϸ���\n");
		}
	}
	return 0;
}