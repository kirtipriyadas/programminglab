#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter num1:");
    scanf("%d",&a);
    printf("enter num2:");
    scanf("%d",&b);
    printf("enter num3:");
    scanf("%d",&a);
    if(a>b && a>c){
        printf("number 1 is the largest");
    }
    else if(b>a && b>c){
        printf("number 2 is the largest");
    }
    else if(c>a && c>b){
        printf("number 3 is the largest");
    }
    



    


    return 0;



}