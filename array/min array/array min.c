// Online C compiler to run C program online
#include <stdio.h>
# define MAX 50
int main() {
    int arr[MAX];
    int n,i,min;
    // enter the values 
    printf("enter the number of elements :");
    scanf("%d",&n);
    // enter the elements value 
    printf("enter the elements value :");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=1;i<n;i++){
        min=arr[0];
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("min value of the array is:%d",min);

    return 0;
}