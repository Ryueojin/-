//0입력후 if문을 받아들이지 못함

#include<stdio.h>

int main()
{
	int king, queen, l, b, n, p;
	scanf_s("%d %d %d %d %d %d", &king, &queen, &l, &b, &n, &p);

	king <= 10 && king >= 0;
	queen <= 10 && queen >= 0;
	l <= 10 && l >= 0;
	b <= 10 && b >= 0;
	n <= 10 && n >= 0;
	p <= 10 && p >= 0;

	if (king == 0) king = 1;
	if (king == 1) king = 0;
	if (king > 1) king = -(king - 1);
	
	if (queen == 0) queen = 1;
	if (queen == 1) queen = 0;
	if (queen > 1) queen = -(queen - 1);
	
	if (l < 2) l = 2 - l;
	if (l == 2) l = 0;
	if (l > 2) l = -(l - 2);

	if (b < 2) b = 2 - b;
	if (b == 2) b = 0;
	if (b > 2) b = -(b - 2);

	if (n < 2) n = 2 - n;
	if (n == 2) n = 0;
	if (n > 2) n = -(n - 2);

	if (p < 8) p = 8 - p;
	if (p == 8) p = 0;
	if (p > 8) p = -(p - 8);

	printf("%d %d %d %d %d %d", king, queen, l, b, n, p);

	return 0;
}