// Selection Sort 
#include<stdio.h>

int main(void)
{
    int count;
    printf("How many numbers : ");
    scanf("%d",&count);
    
    // Reading User Input 
    int data[count];
    printf("Enter Numbers : ");
    for(int i = 0; i < count; i++)
    {
        scanf("%d", &data[i]);
    }
    
    //Printing User Input
    printf("Data Received : ");
    for(int i = 0; i < count; i++)
    {
        printf("%d ", data[i]);
    }
    
    // Performing Selection short
    for (int pass = 0; pass < count; pass++)
    {
        for(int i = pass+1; i < count ; i++) // All next data compared with current data
        {
            if (data[pass] > data[i]) //swap if next data smaller than current data
            {
                int copy = data[i];
                data[i] = data[pass];
                data[pass] = copy;
            }
        }
    }
    
    // Printing sorted array
    printf("\nSorted Data : ");
    for(int i = 0; i < count; i++)
    {
        printf("%d ", data[i]);
    }

}
