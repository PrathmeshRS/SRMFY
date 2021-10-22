#include<stdio.h>
void main(){
    int a , b;
    printf("Human give me two numbers a and b\n");
    scanf("%d %d", &a, &b);
    printf("The addition is: %d\n", a+b);
    printf("The substraction is: %d\n", a-b);
    printf("The multiplication is: %d\n", a*b);
    printf("The division is: %f\n", (float)a/b);
    printf("The integer division is: %d\n", a/b);
    printf("The modulo is: %d\n", a%b);

}