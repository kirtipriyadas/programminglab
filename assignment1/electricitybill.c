#include<stdio.h>
int main(){
    float a;
    printf("enter units consumed: ");
    scanf("%f",&a);
    if(a<=100){
        printf("total bill: %f",a*1.5);
    }
    if(a>100 && a<=200){
        printf("total bill: %f",a*2);
    }
    if (a>200 && a<=300){
        printf("total bill: %f",a*3);
    }
    if (a>300){
        printf("total bill: %f",a*5);
    }
    
    return 0;
}