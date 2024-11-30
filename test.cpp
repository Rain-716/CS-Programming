#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3};
    int *p = arr;

    int a = *p++; // a = 1, p 现在指向 arr[1]
    int b = (*p)++; // b = 2, 然后 p 指向的值（现在是 arr[1]）被递增到 3

    printf("%d, %d, %d\n", a, b, *p); // 输出: 1, 2, 3
    return 0;
}
