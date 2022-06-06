#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int q = 0, w = 0;
	scanf("%4d%02d", &q, &w);
	if (w >= 3 && w <= 5)
	{
		printf("spring\n");
	}
	else if (w >= 6 && w <= 8)
	{
		printf("summer\n");
	}
	else if (w >= 9 && w <= 11)
	{
		printf("autumn\n");
	}
	else
	{
		printf("winter\n");
	}
	return 0;
}