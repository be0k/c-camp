#include <stdio.h>

int main()
{
    char str[80];
    char srch;
    int k=0, num = 0;

    printf("문자열 입력 : ");
    scanf("%s", &str);
    printf("찾는 단어 입력 : ");
    scanf(" %c", &srch);

    while(1)
    {
        if(str[k]==0)
        {
            break;
        }
        else if(str[k]==srch)
        {
           printf("%d ",k+1);
           num++;
        }  
        k++;
    }
    if(num==0)
        printf("찾는 단어가 없습니다.\n");
    else
        printf("번째에 있습니다.\n");

    return 0;
}