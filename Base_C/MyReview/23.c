#include <stdio.h>

int main()
{
    // �����������ڴ洢30��ͬѧ�ĳɼ�
    int scores[30];
    // ����ѭ������ɼ�
    for (int i = 0; i < 30; i++)
    {
        printf("������� %d ��ͬѧ�ĳɼ�: ", i + 1);
        scanf("%d", &scores[i]);
    }

    // ��ʼ����߷֡���ͷֺ��ܷ�
    int maxScore = scores[0];
    int minScore = scores[0];
    int sumScore = 0;

    // �������飬�ҳ���߷֡���ͷֲ������ܷ�
    for (int i = 0; i < 30; i++)
    {
        if (scores[i] > maxScore)
        {
            maxScore = scores[i];
        }
        if (scores[i] < minScore)
        {
            minScore = scores[i];
        }
        sumScore += scores[i];
    }

    // ����ƽ����
    float averageScore = (float)sumScore / 30;

    // ��������ʹ��%.1f����ƽ���ֱ���һλС��
    printf("��߷�: %d\n", maxScore);
    printf("��ͷ�: %d\n", minScore);
    printf("ƽ����: %.1f\n", averageScore);

    return 0;
}