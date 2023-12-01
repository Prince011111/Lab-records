#include<stdio.h>
void main()
{
    float r;
    printf("enter the radius");
    scanf("%f", &r);
    float area,perimeter;
    perimeter =2*3.14*r; 
    area= 3.14*r*r;
    printf("area of circle=%.2f\n",area);
    printf("perimeter of circle =%.2f\n", perimeter);


}