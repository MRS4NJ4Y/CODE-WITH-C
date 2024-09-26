#include <stdio.h>

void  insertElement(int arr[], int n,int x,int pos) {
    for(int i=n-1; i>=pos;i--)
    arr[i+1] = arr[i];
    arr[pos] = x;
} int main()
{
    int arr[5] = {2,4,1,8,5};
    int n=5;
    printf("before insertion :");
    for(int i=0; i<n; i++)
    printf("%d ", arr[i]);
    printf("\n");
     int x=10; int pos=2;
     insertElement(arr,n,x,pos);
     n++;
     printf("after insertion:");
     for(int i=0;i<n;i++)
     printf("%d ", arr[i]);
     return 0;
}