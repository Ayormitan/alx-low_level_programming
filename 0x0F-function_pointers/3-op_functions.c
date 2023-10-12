#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - function returns the sum of a and b
 *
 *@a: First digit
 *@b: second digit
 *Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Function to return the differences in a and b
 *
 *@a: First value
 *@b: Second value
 *Return: Always their difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Function return products of two numbers
 *
 * @a: First value
 * @b: Second value
 *
 * Return: Always success
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function returns the division of a and b
 *
 * @a: First value
 * @b: Second value
 *
 * Return: Always success
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Function returns the remainder of the division by a and b
 *
 * @a: First value
 * @b: Second value
 *
 * Return: Always success
 */
int op_mod(int a, int b)
{
	return (a % b);
}
