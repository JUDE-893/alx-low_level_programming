#!/bin/bash

#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Determines if a number is positive. negative or zero
 *
 * Return: always 0 (Success)
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n>0){
		printf("%d is a positif number\n",n)
	}
	else if(n<0){
		printf("%d is a negative number\n",n)
	}
	else{
		printf("%d is Zero\n",n)
	}; 
	return (0);
}
