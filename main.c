#include<stdio.h>
int main(){
    char op;
    int num1,num2;
    float result;
    printf("Enter an Operator(+,-,*,/):");
    scanf("%c",&op);
    printf("Enter First Operand: ");
    scanf("%d",&num1);
    printf("Enter Second Operand:");
    scanf("%d",&num2);
    if (op=='+'){
        result=num1+num2;
        printf("Addition of %d and %d is:%f",num1,num2,result);
    }
    else if(op=='-'){
        result=num1-num2;
        printf("Substraction of %d and %d is:%f",num1,num2,result);

    }
    else if(op=='*'){
        result=num1*num2;
        printf("Multiplication of %d and %d is:%f",num1,num2,result);
    }
    else if(op=='/'){
        result=num1/num2;
        printf("Division of %d and %d is: %.2f",num1,num2,result);
    }
    else{
        printf("Wrong Input");
    }
    return 0;

}