#include <stdio.h>
//practice2

//while문
int main()
{
    int i = 0, num = 0;

    printf("정수를 입력하세요 : ");
    scanf("%d", &num);

    if(num<0)
    {
        printf("0보다 큰 수를 입력해주세요.");
    }

    while(i<num)
    {
        printf("*");
        i++;
    }
    printf("\n");

    return 0;
}
