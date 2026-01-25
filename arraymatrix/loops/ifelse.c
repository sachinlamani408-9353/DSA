//find 4 employes net salary and if empolye work more then 40 hours it is  over time then find total salary
#include <stdio.h>

int main() {
int hours;
float otpay;
int i=1;
  while (i<=4) 
  {
  printf("enter no.of hours worked:");
  scanf("%d",&hours);
  
  if(hours>40)
  
    otpay=(hours-40)*120;
    
    else
    otpay=0;
    printf("hours=%d overtime pay=Rs.%f\n",hours,otpay);
   
    
 i++;
  }  
  return 0;
}