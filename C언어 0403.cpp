#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main()
{
    int choice;
    float x, y, r, angle;

    printf("��ǥ ��ȯ ���α׷�\n");
    printf("1: ����ǥ -> ������ǥ\n");
    printf("2: ������ǥ -> ����ǥ\n");
    printf("����: ");
    scanf_s("%d", &choice);

    if (choice == 1)
    {
        r = 0.0;
        angle = 0.0;
        x = 0.0;
        y = 0.0;

        printf("r �Է�: ");
        scanf_s("%f", &r);
        printf("angle �Է� (����): ");
        scanf_s("%f", &angle);

        // ����ǥ -> ������ǥ ��ȯ
        x = r * cos(angle);
        y = r * sin(angle);

        printf("������ǥ: x = %f, y = %f\n", x, y);
    }
    else if (choice == 2)
    {
        r = 0.0;
        angle = 0.0;
        x = 0.0;
        y = 0.0;

        printf("x �Է�: ");
        scanf_s("%f", &x);
        printf("y �Է�: ");
        scanf_s("%f", &y);

        // ������ǥ -> ����ǥ ��ȯ
        r = sqrt(x * x + y * y);
        angle = atan2(y, x);

        printf("����ǥ: r = %f, angle = %f ����\n", r, angle);
    }

    else
    {
        printf("�߸��� �Է��Դϴ�.\n");
    }

    return 0;
}
