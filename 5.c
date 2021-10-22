#include<stdio.h>
void main() {
    float cel, far; // cel for celcius, f for farenheit
    printf("Human you na give me farenheit temperature ok?\n");
    scanf("%f", &far);
    cel = (far - 32)*0.5556;
    printf("Haha. Dont worry you might not have fever. Your temperature is %f degree celcius \n", cel);
}