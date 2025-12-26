#include <stdio.h>
int main(){
int arr[100],n; // array declaration
int pos=0,neg=0,even=0,odd=0;
// giving the number of elements user want 
printf("enter the number of elements:\n");
scanf("%d",&n);
// enter the elements 
printf("enter the elements %d :\n",n);
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    if(arr[i]>0){
        pos++;
    }
    else{
        neg++;
    }
    if(arr[i] %2==0){
        even++;
    }
    else{
        odd++;
    }
}
// print the out values
printf("possitive numbers =%d\n",pos);
printf("negative  numbers =%d\n",neg);
printf("even  numbers =%d\n",even);
printf("odd numbers =%d\n",odd);
return 0;
}