#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num, a, b, c;
	printf(" ENTER NUMBER : ");
	scanf("%d", &num);
	for (a = 0; a < num; a++)
	{
		for (b = 0; b < num; b++)
		{
			c = a + b;
			if (c % 2 == 0)
			{
				printf(" X ");
			}
			else
			{
				printf(" O ");
			}
		}
		printf("\n");
	}
	return 0;
}