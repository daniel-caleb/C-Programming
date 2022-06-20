#include <stdio.h>
#define pie 3.14

void main(){
int radius;
float perimeter, area;
printf("Enter the radius of a circle \n");
scanf("%d", radius);
perimeter = 2*pie*radius;
area = pie*radius*radius;
printf("%f\n The perimeter=%f\n", perimeter);
printf("%f\n The perimeter=%4.2f", area);
}
