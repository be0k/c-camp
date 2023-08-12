#include <stdio.h>
//practice2_Q1
int main()
{
    int age[5] = {0,};
    int ten = 0, twenty = 0, threety = 0;
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

        if(10<=age[i] && age[i]<20)
        {
            ten++;
        }
        else if(20<=age[i] && age[i]<30)
        {
            twenty++;
        }
        else if(30<=age[i] && age[i]<40)
        {
            threety++;
        }
    }
    printf("10대 %d명\t20대 %d명\t30대 %d명\n",ten,twenty,threety );
    return 0;
}
