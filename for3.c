#include <stdio.h>

int main()
{
    int num;
    printf("정수를 입력해주세요 : ");
    scanf("%d", &num);

    int count=0;
    for(int i=0;i<100;i++)
    {
        if((i+1)%num==0)
        {
            printf("%d ",i+1);
            count ++;
        }
    }
    printf("홀수는 총 %d개입니다\n",count);
    return 0;
}