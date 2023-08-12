#include <stdio.h>

int main()
{
    for(int i=1;i<=9; i++)
    {
        if(i%2==1)
            continue;
        for(int j=1;j<=9;j++)
        {
            printf("%dx%d = %d\n",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}