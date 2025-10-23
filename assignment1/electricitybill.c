#include<stdio.h>
int main(){
    float a,b;
    printf("enter units consumed: ");
    scanf("%f",&a);
    if(a<=100){
        printf("total bill: %f",a*1.5);
    }
    
    else if(a>100 && a<=200){
        b=a-100;
        printf("total bill: %f",(100*1.5)+(b*2));
    }
    
    else if (a>200 && a<=300){
        b=a-200;
        printf("total bill: %f",(100*1.5)+(100*2)+(b*3));
    }
    
    else if (a>300){
        b=a-300;
        printf("total bill: %f",(100*1.5)+(100*2)+(100*3)+(b*5));
    }
    
    return 0;
}