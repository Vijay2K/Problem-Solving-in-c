//write c program to find maximum and minimum element in array using recursion

#include <stdio.h>
#include <limits.h>

int MaxNum(int arr[20], int i, int size)
{
    int maxVal = INT_MIN;

    if(i < size)
    {
        if(arr[i] >= maxVal)
        {
            maxVal = arr[i];
        }

        MaxNum(arr, i + 1, size);
    }

    return maxVal;
}

int MinNum(int arr[20], int i, int size)
{
    int minVal = INT_MAX;

    if(i < size)
    {
        if(arr[i] <= minVal)
        {
            minVal = arr[i];
        }

        MinNum(arr, i, size);
    }
    
    return minVal;

}

int main()
{
    int arr[20], size, maxVal, minVal, index = 0;

    printf("Enter the size : ");
    scanf("%d", &size);

    printf("Enter the elements : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    maxVal = MaxNum(arr, index, size);
    minVal = MinNum(arr, index, size);

    printf("Max Val : %d \n", maxVal);
    printf("Min Val : %d \n", minVal);

    return 0;
}

