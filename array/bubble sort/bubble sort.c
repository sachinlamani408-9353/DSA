// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[100];
    int i,n,j,temp;
    // enter the number of elements 
    printf("enter the number of elements :");
    scanf("%d",&n);
    // enter the elemts
    printf("enter the value of elements :");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   for(i=0;i<n-1;i++){
       for(j=0;j<n-1-i;j++){
           if(arr[i]>arr[j+1]){
               temp=arr[i];
               arr[i]=arr[j+1];
               arr[j+1]=temp;
           }
       }
   }
   printf("sorted array\n");
   for(i=0;i<n;i++){
       printf(" %d ", arr[i]);
   }
    return 0;
}