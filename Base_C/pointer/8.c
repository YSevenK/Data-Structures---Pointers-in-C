// arrays as function arguments

#include <stdio.h>

int sumOfElements(int *A, int size) // int*A or int *A[] is same
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += A[i];    // A[i] is same as *(A+i)
    }
    return sum;
}

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int size = sizeof(A) / sizeof(A[0]);
    int total = sumOfElements(A, size);
    printf("Sum of elements in array is %d\n", total);
}