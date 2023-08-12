#include <stdio.h>
//practice1_Q2

int main()
{
    int age[5] = {0,};
    int dwn = 0, up = 0;
    printf("5명의 나이를 입력해주세요.\n");
    
    for(int i=0; i<5; i++)
    {
        scanf("%d", &age[i]);
        if(age[i]<0)
        {
            printf("나이는 0보다 작을 수 없습니다.\n");
            i--;
            continue;
        }

        if(age[i]>=20)
        {
            up++;
        }
        else
        {
            dwn++;
        }
    }


    printf("성인 %d명\t성인이 아닌 사람 %d명\n", up,dwn);
    return 0;
}
