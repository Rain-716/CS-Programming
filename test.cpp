#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3};
    int *p = arr;

    int a = *p++; // a = 1, p ����ָ�� arr[1]
    int b = (*p)++; // b = 2, Ȼ�� p ָ���ֵ�������� arr[1]���������� 3

    printf("%d, %d, %d\n", a, b, *p); // ���: 1, 2, 3
    return 0;
}
