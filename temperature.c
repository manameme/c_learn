#include <stdio.h>

float ctof(int n)
{
	float f = 0;
	f = (n * 9/5) + 32;
	return f;
}

float ftoc(int n)
{
	float c = 0;
	c = (n + (-32)) * 5/9;
	return c;
}

int main()
{
	int g = 0;
	printf("What do you want to find, F = 0 or C = 1?\n");
	scanf("%d", &g);
	if (g == 0)
	{
		float x = 0;
		printf("What is your value in Celsius?\n");
		scanf("%f", &x);
		float y = ctof(x);
		printf("The temperature is %f degrees fahrenheit.\n", y);
	}
	else
	{
		float a = 0;
		printf("What is your value in Fahrenheit\n");
		scanf("%f", &a);
		float b = ftoc(a);
		printf("The temperature is %f degrees celsius.\n", b);
	}
}