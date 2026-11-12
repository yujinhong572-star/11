#include <stdio.h>

int main(void)
{
    int i;
    int grade[5];
    int sum = 0;
    int *ptr = grade; // 포인터 변수 선언 및 배열 주소 대입

    // 입력 받는 반복문
    for (i = 0; i < 5; i++)
    {
        printf("input value (%d) : ", i);
        scanf("%d", &grade[i]);
    }

    // 포인터 문법을 통한 배열 값 출력 및 합계 계산
    for (i = 0; i < 5; i++)
    {
        printf("grade[%d] = %d\n", i, *(ptr + i));
        sum += *(ptr + i); // 포인터를 이용한 값 누적
    }

    // 평균값 계산 후 출력
    printf("average : %d\n", sum / 5);

    return 0;
}
