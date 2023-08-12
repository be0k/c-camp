#include <stdio.h>

int main()
{
    int k = 0;
    char a[80];

    scanf("%s", &a);


    while(1)
    {
        if(a[k]==0)
            break;
        k++;
    }
    printf("%d\n", k);
    return 0;
}