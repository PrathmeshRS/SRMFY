#include<stdio.h>
void main(){
    float r, b, h; // r for radius, b for base of triangle, h for height of triangle
    float cArea, cCircum, tArea;  // circles area, circumference, triangles area
    printf("Please give me your radius, base and height\n");
    scanf("%f %f %f", &r, &b, &h);
    cArea = 3.14*r*r;
    cCircum = 2*3.14*r;
    tArea = 0.5*b*h;
    printf("Circle Area: %f, Circumference %f\n Triangle Area: %f \n", cArea, cCircum, tArea);
    
}