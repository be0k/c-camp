#include <stdio.h>

int main()
{
    int a, b;
    int c=0;
    printf("첫번째 정수를 입력하세요 : ");
    scanf("%d", &a);
    printf("두번째 정수를 입력하세요 : ");
    scanf("%d", &b);

    if(a>b)
    {
        for(int i=(a-1); i>b; i--)
        {
            c = c + i;
        }
        printf("합 : %d\n", c);
    }

    else if(a<b)
    {
        for(int j=(a+1);j<b; j++)
        {
            c = c + j;
        }
        printf("합 : %d\n", c);
    }

    else
    {
        printf("합 : 0\n");
    }

    return 0;
}