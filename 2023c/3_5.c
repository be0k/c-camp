#include <stdio.h>
//practice3

//for문
int main()
{
    for(int i = 1; i<10; i++)
    {
        for(int j = 1; j<10;j++)
        {
            if(j==5 || j==7)
                continue;
            printf("%d*%d = %d   ",j,i,j*i);
        }
        printf("\n");
    }
    return 0;
}
