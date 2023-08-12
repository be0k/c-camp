#include <stdio.h>

int main()
{
    int a;
    printf("0이 아닌 정수를 입력해주세요 : ");
    scanf("%d", &a);

    if(a!=0)
    {
        if(a%2==0)
            printf("짝수입니다.\n");
        else
            printf("홀수입니다.\n");
    }
    else
    {
        printf("0을 입력하셨습니다.\n");
    }

    return 0;
}