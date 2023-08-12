#include <stdio.h>
//practice2_Q2

int main()
{
    char score = 0;

    scanf("%c", &score);

    if(score>='a' && score<='z')
        score-=32;

    switch(score)
    {
        case 'A':
        printf("당신의 점수는 91~100점 사이입니다.\n");
        break;

        case 'B':
        printf("당신의 점수는 81~90점 사이입니다.\n");
        break;

        case 'C':
        printf("당신의 점수는 71~80점 사이입니다.\n");
        break;

        case 'D':
        printf("당신의 점수는 61~70점 사이입니다.\n");
        break;

        case 'F':
        printf("당신의 점수는 60점 이하입니다.\n");
        break;
        
        default:
        printf("성적을 잘못입력하셨습니다.\n");
        break;
    }
    return 0;
}

