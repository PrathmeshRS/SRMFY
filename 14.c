#include<stdio.h>
void main(){
    int x = 200;
    int y = 400;
    int a = x/10;
    int b = y/0;
    printf("%d\n", a);
    printf("%d\n", b);
}
// Floating point exception (core dumped)