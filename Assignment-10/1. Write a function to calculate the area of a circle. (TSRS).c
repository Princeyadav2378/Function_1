//1. Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float area_of_circle(int r);
int main()
{
	float a;
	int r;
	printf("Enter the radius of area:\n");
	scanf("%d",&r);
	a=area_of_circle(r);
	printf("Area of circle is =%0.2f",a);
	return 0;
}
float area_of_circle(int r)
{	
     float area,pi=3.14;
     area=3.14*r*r;
     return area;
}
