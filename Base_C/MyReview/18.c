#include <stdio.h>

double calculateY(int m) {
    double y = 0;
    for (int i = 1; i < m; i++) {
        y += 1.0 / (2 * i - 1);
    }
    return y;
}

int main() {
    int m;
    printf("����������m��ֵ��\n");
    scanf("%d", &m);
    double result = calculateY(m);
    printf("���������m=%d������õ���yֵΪ��%lf\n", m, result);
    return 0;
}