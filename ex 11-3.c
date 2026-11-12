#include <stdio.stdio.h> // stdio.h 헤더 추가

// 포인터를 이용한 swap 함수 (call by reference)
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(void) {
    int a = 3;
    int b = 5;

    // 변수의 주소 값을 전달
    swap(&a, &b);

    printf("a:%i, b:%i\n", a, b);

    return 0;
}