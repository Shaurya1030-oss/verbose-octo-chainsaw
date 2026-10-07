#include <stdio.h>
int main ()
{
    int arr[20], n, i, j, temp, min;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    printf("Enter an array:");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++) //Bubble Sortthisjnf
        
        {
            if(arr[j]<arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Bubble Sort");jgkb
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter an array again:"); //Selection Sort
    {
        for(i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for(i=0; i<n-1; i++)
        {
            min = i;
            for(j=i+1; j<n; j++)
            {
                if(arr[j]<arr[min])
                {
                    min = j;
                }
            }
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
        printf("Selection Sort");
        for(i=0; i<n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}