#include <stdio.h>

/*
Author : MS
Desc.  : Linear Equation Solver

2x + 3y = 9
8x - 5y  = 1
>a.out
Enter First Equation:
2,3,9
Enter Second Equation:
8,-5,1
Solutions is x=**, y=**
*/


int main()
{
	float a1;
	float b1;
	float c1;
	printf("What is your first equation - x, y, int?\n");
	scanf("%f, %f, %f", &a1, &b1, &c1);
	
	float a2;
	float b2;
	float c2;
	printf("What is your second equation - x, y, int?\n");
	scanf("%f, %f, %f", &a2, &b2, &c2);
	
	
	float x = (b1*c2 - b2*c1) / (a1*b2 - a2*b1);
	float y = (c1*a2 - c2*a1) / (a1*b2 - a2*b1);
	
	
	printf("x = %f and y = %f\n", x , y);
	
	
	return(0);
}
