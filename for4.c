#include <stdio.h>

int main()
{
    int num;
    int max, min, mean;

    printf("정수를 입력하세요 : ");
    scanf("%d", &num);
    max = num;
    min = num;
    mean = num;

    for(int i=0;i<9;i++)
    {
        printf("정수를 입력하세요 : ");
        scanf("%d", &num);
        if(num>max)
        {
            max = num;
        }
        if(num<min)
        {
            min = num;
        }
        mean = mean + num;
    }
    printf("최댓값 : %d, 최솟값 : %d, 평균값 : %d\n",max,min,mean/10);
    return 0;
}