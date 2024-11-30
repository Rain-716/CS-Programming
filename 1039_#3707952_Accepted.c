#include <stdio.h>
int main()
{
    char g;
    double b, h;
    scanf("%c %lf", &g, &b);
    if (g=='F')
    	h=b*1.94+28.7;
    else 
        h=b*1.88+32;
    printf("%.1f", h);
    return 0;
}