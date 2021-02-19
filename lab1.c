//
//  lab1.c
//  labs
//
//  Created by Carol Naguib on 1/21/21.
//

#include <stdio.h>
#include <stdlib.h>
#include "lab1.h"

void reverse(int num){
    int tens = 0, hundreds = 0, units = 0;
    
    units  = num/100;
    tens  = (num/10) % 10;
    hundreds = num % 10;
    
    printf("The reversed number is: %d%d%d \n", hundreds, tens, units);
    
}

///cyaass



void max_min(int n1, int n2, int n3, int n4){
    int max = 0, min =0;
    if(n1>n2){
        max = n1;
        min = n2;
    }else{
        max = n2;
        min = n1;
    }
    if(n3 > max){
        max = n3;
    }else if(n3 < min){
        min = n3;
    }
    if(n4 > max){
        max = n4;
    }else if(n4 < min){
        min = n4;
    }
    
    printf("Largest number is: %d \n", max);
    printf("Smallest number is: %d \n", min);

    
}


void prime(int n){
    int flag = 0;
    if(n>=0){
        for(int i=2; i<n; i++){
            if(n%i==0){
                printf("%d is divisbile by %d \n", n, i);
                flag = 1;
                break;
            }
        }
        if(flag!=1){
            printf("%d is a prime number \n", n);
        }
    }
    else{
        printf("Invalid Number.\n");
    }
}

void factorial(int x){
    int sum = 1;
    int i = x;
    while(i>0){
        sum *= i;
        i--;
    }
    printf("%d's factorial is = %d \n", x, sum);
}

void sum_odd(int n){
    int sum =0;
    if(n>0){
        for(int i = 0; i<=n; i++){
            if(i%2 != 0){
                sum +=i;
            }
        }
    }
    printf("The sum of odds between 0 and %d is: %d \n", n, sum);
}

