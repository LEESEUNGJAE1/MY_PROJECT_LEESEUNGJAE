#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include "21300166.h"
#include "21100506.h"

void main(){

	char input[2048] ;
	bool is_number ;
	int reverse = 0 ;
	int sort = 0 ;
	char* binary ;

	while(fgets(input, sizeof(input), stdin) != NULL){

		//Receive a user input
		if(input[strlen(input) - 1] == '\n')
			input[strlen(input) - 1] = 0;

		//Terminal condition
		if(strcmp(input, "quit") == 0){
			printf("(bye)\n") ;
			break ;
		}

		is_number = true;
		for(int i = 0; i < strlen(input); i++){
			if(!isdigit(input[i])){
				printf("Entered input is not a number!\n") ;
				is_number = false ;
				break;
			}
		}

		if(is_number){
			//Compute and print the length
			reverse = reverse_digits(atoi(input)) ;
			sort = sort_digits(atoi(input)) ;
			binary = binarized(atoi(input)) ;
			printf("reverse> %d\nsort> %d\nbinary> %s\nisPrime> ", reverse, sort,binary) ;
			//printf(isPrime(n) ? "True\n" : "False\n") ;
			printf("\n") ;
		}
	}

	return ;
}


