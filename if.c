#include <stdio.h>

int main()
{
    int count = 0;
    int a, b, c, d, e;
    printf("첫번째 정수: ");
    scanf("%d", &a);
    if(a%7==0)
        count = count + 1;

    printf("두번째 정수: ");
    scanf("%d", &b);
    if(b%7==0)
        count = count + 1;

    printf("세번째 정수: ");
    scanf("%d", &c);
    if(c%7==0)
        count = count + 1;

    printf("네번째 정수: ");
    scanf("%d", &d);
    if(d%7==0)
        count = count + 1;

    printf("다섯번째 정수: ");
    scanf("%d", &e);
    if(e%7==0)
        count = count + 1;

    printf("\n7의 배수인 정수는 %d개 입니다.\n",count);
    return 0;
}