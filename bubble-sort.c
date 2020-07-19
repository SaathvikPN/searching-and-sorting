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
    
    //Bubble Sort technique implementation
    int pass = 0;
    do
    {
        for(int i = 0; i < count-1; i++)
        {
            if (data[i] > data[i+1]) //Swap out of order pairs
            {
                int copy = data[i];
                data[i] = data[i+1];
                data[i+1] = copy;
            }
        }
        
        // Biggest number bubbled to last. 
        // It's time to bubble another bigger number from remaining array.
        pass = pass + 1; 
    }
    while (pass < count - 1); // Last number would be sorted by default as nothing else to compare with.
    
    // Printing sorted array
    printf("\nSorted Data : ");
    for(int i = 0; i < count; i++)
    {
        printf("%d ", data[i]);
    }
}
