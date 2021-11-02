#include<stdio.h>
struct circle 
{
	float radius,circumference, area;
};

struct circle circ(struct circle the_circle)
{
	the_circle.area= 22.0/7*the_circle.radius*the_circle.radius;
	the_circle.circumference = 2*22.0/7*the_circle.radius;
	
	return(the_circle);
}

void main()
{
	struct circle circ1;
	
	printf("Enter the radius of a circle: ");
	scanf("%f",&circ1.radius);

	circ1 = circ(circ1);
	
	printf("The area is: %.2f\nThe circumference is: %.2f", circ1.area,circ1.circumference);
}

