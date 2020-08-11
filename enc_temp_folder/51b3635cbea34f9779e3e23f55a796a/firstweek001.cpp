#include<stdio.h>
#include<conio.h>
int main() 
{
	float Base, Height, Area;
	printf("Enter Base :");
	scanf_s ("%f", &Base);
	printf("Enter Height :");
	scanf_s ("%f", &Height);
	Area = 0.5 * Base * Height;
	printf("Area is : %f", Area);

#endif
}