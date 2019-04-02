#include "21100506.h"
#include <stdio.h>
#include <string.h>

int reverse_digits(int n){
	
	int reverse = 0;
	while(n){
		reverse = (reverse * 10) + (n % 10);
		n = n/10;
	}
	return reverse;
}

