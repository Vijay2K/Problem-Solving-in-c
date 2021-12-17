//write c program to print all unique elements in array

#include <stdio.h>

int main()
{
    int arr[20], uniqueArr[20], size, count;

    printf("Enter the number : ");
    scanf("%d", &size);

    printf("Enter the elements : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        uniqueArr[i] = -1;
    }

    for (int i = 0; i < size; i++)
    {
        count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                uniqueArr[j] = 0;
            }
        }
        if(uniqueArr[i] != 0)
        {
            uniqueArr[i] = count;
        }
    }

    printf("Unique numbers : \n");
    for (int i = 0; i < size; i++)
    {
        if(uniqueArr[i] == 1)
        {
            printf("%d ", arr[i]);
        }
    }
    
    return 0;
}