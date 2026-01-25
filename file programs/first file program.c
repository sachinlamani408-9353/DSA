// Online C compiler to run C program online
#include <stdio.h>
int main(){
FILE *fptr;

fptr=fopen("sachinfirstcode.txt","w");
if(fptr==NULL){
    printf("file is not createded");

}
else{
    printf("file is open succsfuly");
    fprintf(fptr,"hii supriya sachin lamani");
    fptr=fopen("sachinfirstcode.txt","r");
}

return 0;
}

