#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main()
{
    int choice;
    float x, y, r, angle;

    printf("좌표 변환 프로그램\n");
    printf("1: 극좌표 -> 직교좌표\n");
    printf("2: 직교좌표 -> 극좌표\n");
    printf("선택: ");
    scanf_s("%d", &choice);

    if (choice == 1)
    {
        r = 0.0;
        angle = 0.0;
        x = 0.0;
        y = 0.0;

        printf("r 입력: ");
        scanf_s("%f", &r);
        printf("angle 입력 (라디안): ");
        scanf_s("%f", &angle);

        // 극좌표 -> 직교좌표 변환
        x = r * cos(angle);
        y = r * sin(angle);

        printf("직교좌표: x = %f, y = %f\n", x, y);
    }
    else if (choice == 2)
    {
        r = 0.0;
        angle = 0.0;
        x = 0.0;
        y = 0.0;

        printf("x 입력: ");
        scanf_s("%f", &x);
        printf("y 입력: ");
        scanf_s("%f", &y);

        // 직교좌표 -> 극좌표 변환
        r = sqrt(x * x + y * y);
        angle = atan2(y, x);

        printf("극좌표: r = %f, angle = %f 라디안\n", r, angle);
    }

    else
    {
        printf("잘못된 입력입니다.\n");
    }

    return 0;
}
