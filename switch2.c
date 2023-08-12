#include <stdio.h>

int main()
{
    int a;
    printf("달을 입력해주세요 : ");
    scanf("%d", &a);
    if(a>=1 && a<=12)
    {
        if(a==3 || a==4 || a==5)
            printf("%d월은 봄입니다.\n",a);
        if(a==6 || a==7 || a==8)
            printf("%d월은 여름입니다.\n",a);
        if(a==9 || a==10 || a==11)
            printf("%d월은 가을입니다.\n",a);
        if(a==12 || a==1 || a==2)
            printf("%d월은 겨울입니다.\n",a);
    }
    else
    {
        printf("1~12사이의 숫자가 아닙니다.");
    }
    return 0;
}