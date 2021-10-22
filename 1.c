#include<stdio.h>
#include<math.h>
void main() {
    int x1, x2, y1, y2;
    float dis;
    printf("Give me the coordinates of point 1 plz:\n");
    scanf("%d %d", &x1, &y1);
    printf("Give me the coordinates of point 2 plz:\n");
    scanf("%d %d", &x2, &y2);
    dis = sqrt(pow((x2-x1),2) - pow((y2-y1), 2)); // used sqrt for squareroot and pow for squaring i.e raised to power of 2
    printf("The distance between the two points is: %f units", dis);
}