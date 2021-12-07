#include <stdio.h>

int Diameter(int radius);
int Circumference(int radius);
int Area(int radius);

int main()
{
	int radius;
	printf("Enter the radius : ");
	scanf("%d", &radius);
	
	printf("Diameter of the circle = %d\n", Diameter(radius));
	printf("Circumference of the circle =  %d\n", Circumference(radius));
	printf("Area of the circle =  %d", Area(radius));
	return 0;
}

int Diameter(int radius)
{
	return 2 * radius;
}

int Circumference(int radius)
{
	return 2 * (22 / 7) * radius;
}

int Area(int radius)
{
	return (22 / 7) * radius * radius;
}
