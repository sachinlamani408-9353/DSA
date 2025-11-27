// hierarchy of operators
#include <stdio.h>

int main() {
 int a,b,c,d,m,n,x,e,y;//integers are declare here
 printf("Enter the number:");
 scanf("%d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&m,&n,&x,&e,&y);//number are entered by user
 //hierarchy operaters
 int z;
 z=a*b-c*d;
 printf("%d\n",z);
 int j;
 j=(m+n)*(a+b);
 printf("%d\n",j);
 int i;
 i=3*x*x+2*x+5;
 printf("%d\n",i);
 int l;
 l=(a+b+c)/(d+e);
 printf("%d",l);
  return 0;
}