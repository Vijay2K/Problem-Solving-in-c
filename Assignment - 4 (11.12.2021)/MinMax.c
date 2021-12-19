//write c program to find maximum and minimum element in array using recursion

#include <stdio.h>

int MaxNum(int[], int, int);
int MinNum(int[], int, int);

int main()
{
    int arr[20], size, min, max;
    printf("Enter the size : ");
    scanf("%d", &size);

    printf("Enter the elements : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = MaxNum(arr, 0, size);
    min = MinNum(arr, 0, size);

    printf("Max number : %d\n", max);
    printf("Min number : %d\n", min);

    return 0;
}


int MaxNum(int arr[], int i, int n)
{
    int c;
    if(i >= n - 2)
    {
        if(arr[i] > arr[i + 1])
        {
            return arr[i];
        } else {
            return arr[i + 1];
        }
    }

    c = MaxNum(arr, i + 1, n);
    if(arr[i] > c)
    {
        return arr[i];
    } else {
        return c;
    }
}

int MinNum(int arr[], int i, int n)
{
    int c;
    if(i >= n - 2)
    {
        if(arr[i] < arr[i + 1])
        {
            return arr[i];
        } else {
            return arr[i + 1];
        }
    }

    c = MinNum(arr, i + 1, n);
    if(arr[i] < c)
    {
        return arr[i];
    } else {
        return c;
    }
}