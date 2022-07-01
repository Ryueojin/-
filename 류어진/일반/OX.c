#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>
#include <string.h>

int main()
{
	int num , score=0;
	char OX[81];
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++)
	{
		int count = 1;
		int score = 0;
		scanf_s("%s", OX,sizeof(OX));
		for (int j = 0; OX[j]!=NULL; j++)
		{
			if (OX[j] == 'O')
			{
				score += count;
				count++;
			}
			else
			{
				count = 1;
			}
		}
		printf("%d\n", score);
	}
	return 0;
}
