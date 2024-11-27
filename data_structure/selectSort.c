#include "stdio.h"

// ��С����
void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // ���赱ǰԪ����С
        int minIndex = i;
        // �������� �����Ƿ��бȵ�ǰԪ�ظ�С��
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        // �ҵ���arr[i]��С��Ԫ�� ����λ��
        if (minIndex != i)
        {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main()
{
    int n, i;
    printf("���������С: ");
    scanf("%d", &n);
    int arr[n];
    printf("����������Ԫ��(������): ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("����������(��С����): ");

    sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}