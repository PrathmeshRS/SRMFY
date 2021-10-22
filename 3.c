#include<stdio.h>

void main() {
    int a, b;
    printf("Human gibe me two numbers a and b pweease\n");
    scanf("%d %d", &a, &b);
    a = b - a;
    b = b - a;
    a = a + b;
    printf("Human now a and b are %d and %d\n", a, b);
}