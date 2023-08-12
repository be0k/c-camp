#include <stdio.h>
//practice1_Q1

int main()
{
    int age[5] = {0,};
    int cnt = 0;
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

        if(20<=age[i] && age[i]<30)
        {
            cnt++;
        }
    }

    printf("20대는 총 %d명 입니다.\n", cnt);
    return 0;
}
