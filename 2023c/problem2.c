#include <stdio.h>
//problem2

int main()
{
    int a[3];

    for(int i = 0;i<3; i++)
    {
        scanf("%d", &a[i]);
    }

    if(a[0]==a[1] && a[1]==a[2] && a[2]==a[0])
    {
        printf("your score is %d\n",10000+a[0]*1000);
    }
    else if(a[0]==a[1])
    {
        printf("your score is %d\n",1000+a[0]*100);
    }
    else if (a[1]==a[2])
    {
        printf("your score is %d\n",1000+a[1]*100);
    }
    else if (a[2]==a[0])
    {
        printf("your score is %d\n",1000+a[2]*100);
    }
    else
    {
        int max = a[0];
        if(a[1]>max)
            max = a[1];
        if(a[2]>max)
            max = a[2];
        printf("yout score is %d\n",max*100);
    }
    return 0;
}