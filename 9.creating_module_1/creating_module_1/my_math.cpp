/* This module contains mathematical functions. */

int factorial(int n)
{
	int fact = 1;

	for (int i = 1; i < n; i++)
	{
		fact = fact * (i + 1);
	}
	return fact;
}

int area_square(int side)
{
	return side * side;
}

int area_rectangle(int side, int base)
{
	return side * base;
}