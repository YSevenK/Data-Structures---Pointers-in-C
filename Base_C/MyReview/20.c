#include <stdio.h>

int fa(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}

int main()
{
    int n;
    printf("������һ��������n: ");
    scanf("%d", &n);
    int re = fa(n);
    printf("%d", re);
    return 0;

    /*
    int n;
    int result = 1;
    printf("������һ��������n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    printf("%d�Ľ׳���: %d\n", n, result);
    return 0;
    */
}