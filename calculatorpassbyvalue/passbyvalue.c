#include <stdio.h>
double addValue(double x,double y){
    return x+y;
}
double subValue(double x,double y){
    return x-y;
}
double mulValue(double x,double y){
    return x*y;
}
double divValue(double x,double y){
    if(y!=0)
    return x/y;
    else{
        printf("error");
    }
    }
    
int main() {
    double a,b;
    int choice;
    printf("pass by value calulater\n");
    
    printf("enter the two numbers:");
    scanf("%lf %lf",&a,&b);
    printf("enter your choice:");
    scanf("%d", &choice);
    switch(choice){
        case 1: 
        printf("Result = %.2lf\n", addValue(a, b));
        break; 
         case 2:
         printf("Result = %.2lf\n", subValue(a, b));
         break; 
          case 3: 
          printf("Result = %.2lf\n", mulValue(a, b)); 
          break; 
           case 4: 
           printf("Result = %.2lf\n", divValue(a, b)); 
           break; 
    }
    

    return 0;
}