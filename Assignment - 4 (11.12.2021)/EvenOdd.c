//Write c program to separate even and odd numbers in array

#include <stdio.h>

int main()
{
    int arr[20],even[20],odd[20], size;
    int i, j = 0, k = 0;
    printf("Enter the size : ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter the value for arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even[j] = arr[i];
            j++;
        } else {
            odd[k] = arr[i];
            k++;
        }
    }

    printf("\nEven numbers are : \n");
    for (i = 0; i < j; i++)
    {
        printf("%d ", even[i]);
    }

    printf("\n");

    printf("\nOdd numbers are : \n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", odd[i]);
    }
    
    return 0;
}