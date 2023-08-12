#include <stdio.h>
//practice3

int main()
{
    int a, b;
    scanf(" %d %d", &a, &b);
    if(b!=0)
    {
        printf("합 : %d\n차 : %d\n곱 : %d\n나누기 : %f\n 몫 : %d\n나머지 : %d\n",a+b,a-b,a*b,(float)a/b,a/b,a%b);
    }
    else
    {
        printf("합 : %d\n차 : %d\n곱 : %d\n",a+b,a-b,a*b);
        printf("%d를 0으로 나눌 수 없습니다.\n", a);
    }
    
    return 0;
}
