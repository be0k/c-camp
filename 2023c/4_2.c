#include <stdio.h>

int main()
{
    int num[32] = {0,1,};
    printf("%d %d ",num[0],num[1]);
    for(int i=0;i<30;i++)
    {
        num[i+2] = num[i]+num[i+1];
        printf("%d ",num[i+2]);
    }
    printf("\n");
    return 0;
}
