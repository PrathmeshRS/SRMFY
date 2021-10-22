#include<stdio.h>
void main(){
    int s1, s2, s3, s4, s5, total, percentage; //subjects 
    printf("Please enter the marks of 5 subjects \n");
    scanf("%d %d %d %d %d",&s1, &s2, &s3, &s4, &s5);
    total = s1+s2+s3+s4+s5;
    percentage = (total/5); // 5 subject
    printf("The total is %d and the percentage is %d", total, percentage);
}