// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int i ,n,key;
   int arr[100];
   printf("enter the number of elemrnts:");
   scanf("%d",&n);
   printf("enter the elements:");
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
    printf("enter the search number in arr:");
      scanf("%d",&key);
   for(i=0;i<n;i++)
   {
       if(arr[i]==key){
       printf("number is found:%d",key);
       break;
   }
  
   }
    if(arr[i]!=key)
    {
       printf("not found");
       
   }
   

    return 0;
}