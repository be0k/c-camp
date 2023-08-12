#include <stdio.h>

int main()
{
    int mul[9][8];
    for(int i = 1; i<=9; i++)
    {
        for(int j = 2; j<=9; j++)
        {
            mul[i-1][j-2] = j * i;
            printf("%d*%d = %d   ",j,i, mul[i-1][j-2]);
        }
        printf("\n");
    }
    return 0;
}
