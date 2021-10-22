#include<stdio.h>

void main() {
    printf("YOUR SIZES IN BYTES:\nint\t%lu\nfloat\t%lu\ndouble\t%lu\n", sizeof(int), sizeof(float), sizeof(double));
    printf("char\t%lu\nlong int\t%lu\nsigned int\t%lu\nunsigned int\t%lu\n",sizeof(char), sizeof(long int), sizeof(signed int), sizeof(unsigned int));
}