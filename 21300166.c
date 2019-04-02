#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "21300166.h"

int sort_digits(int n) {

    int nDigits = 0 ;
    int temp = 0 ;
    int result = 0 ;
    int *number = NULL ;

    temp = n ;
    while(temp != 0){
        temp = temp / 10 ;
        nDigits++ ;
    }
    
    number = (int *)malloc(sizeof(int)*nDigits) ;
    for(int i = nDigits-1; i >= 0; i--){
        number[i] = n%10 ;
        n /= 10 ;
    }
    for(int i = 0; i < nDigits; i++){
        for(int j = 0; j < nDigits-i-1; j++){
            if(number[j] > number[j+1]){
                temp = number[j] ;
                number[j] = number[j+1] ;
                number[j+1] = temp ;
            }
        }
    }
    for(int i = 0; i < nDigits; i++){
        result = 10*result + number[i] ;
    }
    return result;
}

