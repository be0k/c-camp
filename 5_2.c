#include <stdio.h>

int main()
{
    int a, b = 0;
    while(1)
    {
        printf("양의 정수를 입력해주세요(0이하의 정수를 입력하면 프로그램이 종료됩니다) : ");
        scanf("%d", &a);
        if(a<=0)
            break;
        b = a + b;
        printf("%d\n",b);
    }
    return 0;
}