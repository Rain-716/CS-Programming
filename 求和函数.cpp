#include <stdio.h>
int sum(int a, int b) {
	int s=a+b;
	if (s<0)
		return -1;
	else
		return s;
}
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", sum(a, b));
    return 0;
}
