#include "21100506.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int reverse_digits(int n) {

	int reverse = 0;
	while (n) {
		reverse = (reverse * 10) + (n % 10);
		n = n / 10;
	}
	return reverse;
}

bool is_prime(int n) {

	int i = 0;
	int last = n / 2;
	if (n <= 1)
	{
		return 0;
	}

	for (i = 2; i <= last; i++)
	{
		if ((n%i) == 0)
		{
			return false;
		}
	}
	return true;
}

