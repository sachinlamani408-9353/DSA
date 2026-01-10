#include <stdio.h>
int main(){
    int key,n,arr[100],i,temp;
    
    printf("enter the array size:");
    scanf("%d",&n);
    
    printf("entere the array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

for(i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
          //swap
          temp=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=temp;
        }
    }
}
     printf("sorted array:");
     for(i=0;i<n;i++){
         printf(" %d ",arr[i]);
     }
 return 0;
}