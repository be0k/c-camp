#include <stdio.h>

int main()
{
    int two = 0;
    int array[5]={0};
    scanf("%d %d %d %d %d",&array[0],&array[1],&array[2],&array[3],&array[4]);
    for(int i=0;i<5;i++)
    {
        if(array[i]>=20 && array[i]<30)
            two++;
    }
    printf("5명 중 20대는 %d 명 입니다.\n",two);
    return 0;
}