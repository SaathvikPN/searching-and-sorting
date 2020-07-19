// Linear Search
#include<stdio.h>
int search (int arr[], int n);
int main(void)
{
    int arr[8] = { 5,10,15,20,25,30,35,40 };
    int num, index;
    printf("Enter search number : ");
    scanf("%d",&num);
    
    //Using Linear Search
    index = search(arr,num);
    if(index<0)
        printf("Not found\n");
    else
        printf("Number found at index %d", index);
}

int search(int arr[], int num)
{
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    
    return -1;
}
