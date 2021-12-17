//write c program to find reverse of array

#include <stdio.h>

int main()
{
    int arr[20], rev[20], size;

    printf("Enter the size of an array : ");
    scanf("%d", &size);

    int revIndex = size - 1;

    printf("\nEnter the elements : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        rev[revIndex] = arr[i];
        revIndex--;
    }

    printf("\nThe revese of an array : ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", rev[i]);
    }
    
}