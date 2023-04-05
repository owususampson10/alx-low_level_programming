#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
int low = 1, high = n, mid, sqrt;
while (low <= high)
{
mid = (low + high) / 2;
sqrt = n / mid;
if (sqrt == mid)
{
return (sqrt);
}
else if (sqrt < mid)
{
high = mid - 1;
}
else
{
low = mid + 1;
}
}
return (high);
}
}
