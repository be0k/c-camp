#include <stdio.h>
//practice2
int main()
{
    int birth;
    char bld[2] = {0,0};
    float k;

    printf("출생년도를 입력하세요 : ");
    scanf("%d", &birth);
    if(birth<1800 || birth>2023)
    {
        printf("불가능한 출생년도입니다.\n");
        return 0;
    }

    printf("혈액형을 입력하세요 : ");
    scanf(" %c%c", &bld[0], &bld[1]);

    printf("키를 입력하세요 : ");
    scanf(" %f", &k);
    if(k<=0)
    {
        printf("불가능한 키입니다.\n");
        return 0;
    }

    if((int)bld[1]==10)
    {
        printf("출생년도 : %d\n키 : %.2f\n혈액형 : %c\n",birth,k,bld[0]);
    }
    else
    {
        printf("출생년도 : %d\n키 : %.2f\n혈액형 : %c%c\n",birth,k,bld[0],bld[1]);
    }
    return 0;
}
