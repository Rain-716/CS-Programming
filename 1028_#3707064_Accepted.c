#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if ( a >= b ) 
        printf("Max=%d", a);
    else 
        printf("Max=%d", b);

    return 0;
}