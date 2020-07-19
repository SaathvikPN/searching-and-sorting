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
    
    //Selection Sort technique implementation
    // Iterating through array
    
    for(int i = 1; i < count; i++)
    {
        int j = i; // Variable to iterate backwards to insert
        
        while(j>0) // since data[j-1] at the least is data[0]
        {
            if (data[j-1] > data[j])
            {
                int copy = data[i];
                data[i] = data[i-1];
                data[i-1] = copy;
            }
        
            j--; // Moving back until right insertion point
        }
    }
    
    // Printing sorted array
    printf("\nSorted Data : ");
    for(int i = 0; i < count; i++)
    {
        printf("%d ", data[i]);
    }
}
