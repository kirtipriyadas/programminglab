#include <stdio.h>
int main(){
    float a,b;
    char op;
    printf("enter a num1:");
    scanf("%f",&a);
    printf("enter  num2:");
    scanf("%f",&b);
    printf("enter operator:");
    scanf(" %c",&op);
    switch (op){
        case '+':
         printf("%f",a+b);
         break;

        case '-':
         printf("%f",a-b);
         break;

        case '*':
         printf("%f",a*b);
         break;

        case '/':
         printf("%f",a/b);
         break; 

    }
    return 0;


}