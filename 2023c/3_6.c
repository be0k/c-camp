#include <stdio.h>
//practice3

//while문
int main()
{
    int i=1,j=1;
    while(i<10)
    {
        while(j<10)
        {
            if(j==5 || j==7)
            {
                j++;
                continue;
            }
            printf("%d*%d = %d   ",j,i,j*i);
            j++;
        }
        printf("\n");
        j = 1;
        i++;
    }
    return 0;
}
