#include <stdio.h>
//problem3

int main()
{
    int N=0;
    printf("input int : ");
    scanf("%d", &N);
    for(int i=N;i>0;i--)
    {
        for(int j=i; j>0;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}