#include <stdio.h>

int main() {
    int a, b;
    // ��ʾ������������ȵ���
    printf("��������������ȵ�����\n");
    scanf("%d%d", &a, &b);
    // ʹ����Ԫ��������бȽϺͽ���
    a = (a > b)? a : b;
    b = (a > b)? b : a;
    // ����������a��b
    printf("������a��ֵΪ��%d��b��ֵΪ��%d\n", a, b);

    return 0;
}