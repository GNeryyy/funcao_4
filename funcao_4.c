#include<stdio.h>

 

void somar (float x, float y){
    printf("%f + %f = %.2f", x, y, x+y);
}

 

float sub (float a, float b){
    return a-b;
}

 

float mult (float w, float z){
    return w*z;
}

 

float div (float x, float y){
    return x/y;
}

 

int main(){

    float num1, num2;
    char op;

    printf("Digite um numero: ");
    scanf("%f", &num1);
    printf("Digite outro numero: ");
    scanf ("%f",&num2);

    getchar();
    printf("Qual operação deseja realizar? (+,-,*,/):  ");
    scanf("%c",&op);

 

    
    switch (op){
        case '+':
            //printf("%f + %f = %.2f", num1, num2, somar(num1,num2));
            somar(num1,num2);
            break;
        case '-': 
            printf("%f - %f = %.2f", num1, num2, sub(num1,num2));
            break;
        case '*': 
            printf("%f * %f = %.2f", num1, num2, mult(num1,num2));
            break;
        case '/': 
            printf("%f / %f = %.2f", num1, num2, div(num1,num2));
            break;
        default:
            printf("Você digitou opção errada");

    }


 

 

}
