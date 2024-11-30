#include <stdio.h>
#include <math.h>
int main(){
    int a;
    double b;
    scanf("%d %lf", &a, &b);
    printf("%lf", log(b)/log(a));
    return 0;
}