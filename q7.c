#include <stdio.h>

int main() 
{
    int arr[10];
    int track[1000] = {0}; 
    int i;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) 
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++) 
    {
        if (track[arr[i]] == 0) 
        {
            track[arr[i]] = 1;
        } 
        else 
        {
            arr[i] = -1;
        }
    }

    printf("Updated array: \n");
    for (i = 0; i < 10; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}