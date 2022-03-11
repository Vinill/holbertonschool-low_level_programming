#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 *@op_add - Function that sum a + b
 *@a; num1
 *@b; num2
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *@op_sub - Function that rest a - b
 *@a; num1
 *@b; num2
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *@op_mul - Function that mul a * b
 *@a; num1
 *@b; num2
 */
int op_mul(int a, int b)
{
        return (a * b);
}

/**
 *@op_div - Function that div a / b
 *@a; num1
 *@b; num2
 */
int op_div(int a, int b)
{
        return (a / b);
}

/**
 *@op_mod - Function that mod a % b
 *@a; num1
 *@b; num2
 */
int op_mod(int a, int b)
{
        return (a % b);
}
