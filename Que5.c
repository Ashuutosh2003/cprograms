#include<stdio.h>
int main()
{ 
    float r;
    scanf("radius r = %f",&r);
    float area,perimeter,pi=3.14;
    perimeter=2*pi*r;
    area=pi*r*r;
    printf("area=%f\n\n",area);
    printf("perimeter=%f",perimeter);
    return 0;
}

