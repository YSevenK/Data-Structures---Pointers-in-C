#include "stdio.h"

// �Ӵ�С
void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int maxIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[maxIndex])
            {
                maxIndex = j;
            }
        }
        if (maxIndex != i)
        {
            int temp = arr[i];
            arr[i] = arr[maxIndex];
            arr[maxIndex] = temp;
        }
    }
}

int main()
{
    int n;
    printf("���������С: ");
    scanf("%d", &n);
    int arr[n];
    printf("��������Ԫ��: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sort(arr, n);

    printf("����������: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}