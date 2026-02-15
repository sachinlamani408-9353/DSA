// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[100];
    int i,n,key,mid,low=0,high;
    // enter the number of elements 
    printf("enter the number of elements :");
    scanf("%d",&n);
    // enter the elemts
    printf("enter the value of elements :");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // enter the search elements 
    printf("enter the search elemetns:");
    scanf("%d",&key);
    
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            printf("element is found at:%d\n",mid+1);
            return 0;
        }
        else if(key>arr[mid]){
            low=mid+1;
        }
            else{
                high=mid-1;
            }
      }
      printf("elements not found");
    return 0;
}