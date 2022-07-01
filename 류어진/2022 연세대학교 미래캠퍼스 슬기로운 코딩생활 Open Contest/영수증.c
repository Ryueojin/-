#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sum_money;
	scanf_s("%d", &sum_money);
	sum_money >= 0 && sum_money <= 1000000000;

	int num;
	scanf_s("%d", &num);
	num >= 0 && num <= 100;


	int sum = 0;
	for (int i = 0; i < num; i++)
	{
		int one_money, one_num;
		scanf_s("%d %d", &one_money, &one_num);
		one_money >= 0 && one_num <= 1000000;
		one_num >= 0 && one_num <= 10;
		sum = sum +(one_money*one_num);
	}
	if (sum_money == sum)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}

	return 0;
}