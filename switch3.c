#include <stdio.h>

int main()
{
    int a, b;
    char d;
    scanf("%d %c %d", &a, &d, &b);
    switch(d)
    {
        case '+':
            printf("%d\n",a + b);
            break;
        case '-':
            printf("%d\n",a - b);
            break;
        case '*':
            printf("%d\n",a * b);
            break;
        case '/':
            printf("%d\n",a / b);
            break;
        default:
            printf("오류\n");
            break;
    }
    return 0;
}