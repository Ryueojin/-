#include <stdio.h>
#include <math.h>

int main()
{
	int floor;
	scanf_s("%d", &floor);
	floor <= 5 && floor >= 1;
	int way = pow(2, floor);
	printf("%d",way);
}