#include "main.h"

int fib_rec_count(int a, int b, int n)
{
	if (n == 0 || n == 1) {
		return b;
	}
	return fib_rec_count(a, b, n - 1) + fib_rec_count(a, b, n - 2);
}

int fib_rec(int n)
{
	return fib_rec_count(1, 1, n);
}

int fib_it_count(int a, int b, int n)
{
	if (n < 0) {
		return b;
	}
	return fib_it_count(b, a + b, n - 1);
}

int fib_it(int n)
{
	return fib_it_count(1, 1, n - 2);
}
