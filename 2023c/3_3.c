#include <stdio.h>

//for문
int main()
{
    int num = 0;
    printf("정수를 입력하세요 : ");
    scanf("%d", &num);
    if(num<0)
    {
        printf("0보다 큰 수를 입력해주세요.");
    }

    for(int i=0; i<num; i++)
    {
        printf("*");
    }
    printf("\n");
    return 0;
}
