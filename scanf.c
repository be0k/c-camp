#include <stdio.h>

int main()
{
    int studentID;
    float height;

    printf("학번 : ");
    scanf("%d", &studentID);

    printf("키 : ");
    scanf("%f", &height);

    printf("My studentID is %d\nMy height is %.2f\n",studentID, height);
    
    return 0;
}