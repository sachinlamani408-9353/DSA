// liner saerch program
#include <stdio.h>

int main() {
    int arr[100];
    int i,n,key,found=0;
    // enter the number of elemrnts 
    printf("enter the number of elements:");
    scanf("%d",&n);
    // enter the value of elements 
    printf("enter the value of elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the elements to search :");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(arr[i]==key){
            printf("element found at the position :%d\n",i+1);
            found=1;
            break;
        }
    }
   if(arr[i]!=key){
       printf("element is not found");
   }
    return 0;
}