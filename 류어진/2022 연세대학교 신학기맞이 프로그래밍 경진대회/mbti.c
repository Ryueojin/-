#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int a, b, mbti=0;
    char graph[201][201];
    scanf("%d %d", &a, &b);
    for (int i = 0; i < a; i++)
    {
        scanf("%s", graph[i]);
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (graph[i][j] == 'E' || graph[i][j] == 'I')
            {
                //좌측
                if (j + 3 < b)
                {
                    if (graph[i][j + 1] == 'S' || graph[i][j + 1] == 'N')
                    {
                        if (graph[i][j + 2] == 'T' || graph[i][j + 2] == 'F')
                        {
                            if (graph[i][j + 3] == 'J' || graph[i][j + 3] == 'P')
                            {
                                mbti++;
                            }
                        }
                    }
                }
                //우측
                if (j - 3 >= 0)
                {
                    if (graph[i][j - 1] == 'S' || graph[i][j - 1] == 'N')
                    {
                        if (graph[i][j - 2] == 'T' || graph[i][j - 2] == 'F')
                        {
                            if (graph[i][j - 3] == 'J' || graph[i][j - 3] == 'P')
                            {
                                mbti++;
                            }
                        }
                    }
                }
                //아래
                if (i + 3 < a)
                {
                    if (graph[i + 1][j] == 'S' || graph[i + 1][j] == 'N')
                    {
                        if (graph[i + 2][j] == 'T' || graph[i + 2][j] == 'F')
                        {
                            if (graph[i + 3][j] == 'J' || graph[i + 3][j] == 'P')
                            {
                                mbti++;
                            }
                        }
                    }
                }
                //위
                if (i - 3 >= 0)
                {
                    if (graph[i - 1][j] == 'S' || graph[i - 1][j] == 'N')
                    {
                        if (graph[i - 2][j] == 'T' || graph[i - 2][j] == 'F')
                        {
                            if (graph[i - 3][j] == 'J' || graph[i - 3][j] == 'P')
                            {
                                mbti++;
                            }
                        }
                    }
                }
                //왼 위에서  오 아래로 대각선
                if (j + 3 < b && i + 3 < a)
                {
                    if (graph[i + 1][j + 1] == 'S' || graph[i + 1][j + 1] == 'N')
                    {
                        if (graph[i + 2][j + 2] == 'T' || graph[i +2][j + 2] == 'F')
                        {
                            if (graph[i + 3][j + 3] == 'J' || graph[i + 3][j + 3] == 'P')
                            {
                                mbti++;
                            }
                        }
                    }
                }
                //왼 아래에서 오 위로 대각선
                if (j + 3 < b && i - 3 >= 0)
                {
                    if (graph[i - 1][j + 1] == 'S' || graph[i - 1][j + 1] == 'N')
                    {
                        if (graph[i - 2][j + 2] == 'T' || graph[i - 2][j + 2] == 'F')
                        {
                            if (graph[i - 3][j + 3] == 'J' || graph[i - 3][j + 3] == 'P')
                            {
                                mbti++;
                            }
                        }
                    }
                }
                //오 위에서 왼 아래로 대각선
                if (j - 3 >= 0 && i + 3 < a)
                {
                    if (graph[i + 1][j - 1] == 'S' || graph[i + 1][j - 1] == 'N')
                    {
                        if (graph[i + 2][j - 2] == 'T' || graph[i + 2][j - 2] == 'F')
                        {
                            if (graph[i + 3][j - 3] == 'J' || graph[i + 3][j - 3] == 'P')
                            {
                                mbti++;
                            }
                        }
                    }
                }
                //오 아래에서 왼 위로 대각선
                if (j - 3 >= 0 && i - 3 >= 0)
                {
                    if (graph[i - 1][j - 1] == 'S' || graph[i - 1][j - 1] == 'N')
                    {
                        if (graph[i - 2][j - 2] == 'T' || graph[i - 2][j - 2] == 'F')
                        {
                            if (graph[i - 3][j - 3] == 'J' || graph[i - 3][j - 3] == 'P')
                            {
                                mbti++;
                            }
                        }
                    }
                }
            }
        }
    }
    printf("%d", mbti);
}