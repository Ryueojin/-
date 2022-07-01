#include <stdio.h>

int main()
{
	int t, n, a, b, iu, iU;

	scanf_s("%d", &t);
	t <= 10 && t >= 1;

	for (int i = 1; i <= t; i++)
	{
		scanf_s("%d", &n);
		n <= 10000 && n >= 1;
		
		scanf_s("%d %d", &a, &b);
		a <= 1000000000 && a >= 1;
		b <= 1000000000 && b >= 1;
		for (int j = 1; j <= n; j++)
		{
			scanf_s("%d %d", &iu, &iU);
			iu <= a && iu >= 1;
			iU <= b && iU >= 1;
		}
	}
	for (int i = 1; i <= t; i++)
	{
		printf("Material Management %d\nClassification ---- End!\n", i);
	}
}