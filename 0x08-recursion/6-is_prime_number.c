#include "main.h"

/**
 * _is_prime_number - Function checks if a number is prime.
 * @n: is number.
 * Return: 1(when n is a prime number), else 0.
 */

int is_prime_number(int n);

int is_prime_number(int n)
{
    if (n < 0 || n == 1)
    {
        return 0;
    }
    if (n == 2 || n == 3 || n == 5)
    {
        return 1;
    }
    if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
