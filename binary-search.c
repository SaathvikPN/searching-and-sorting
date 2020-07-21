  
#include <stdio.h>
#include<stdlib.h>
void search(int n, int data[], int first, int last);
int main ()
{
    int data[] = {5,10,15,20,25};
    int n;
    printf("Number : ");
    scanf("%d",&n);
    
    search(n,data,0,4);
    
    return 0;
}

void search(int n, int data[], int first, int last)
{
    while(first<=last)
    {
    int mid = (first+last)/2;
    if(data[mid]==n)
    {
        printf("Result : %d",mid);
        exit(0);
    }
    
    if (data[mid]<n)
    {
        first = mid + 1;
        search(n,data,first,last);
    }
    
    if (data[mid]>n)
    {
        last = mid - 1;
        search(n,data,first,last);
    }
    }
    
    if(first>last)
    {
        printf("Not found\n");
        exit(0);
    }   
}
