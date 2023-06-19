#!/bin/bash

#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */


int main()
{
    int i, j;

    for(i = 0; i <= 9; i++) {

        for(j = 0; j <= 9; j++) {

            if(i != j) {
                putchar("%d%d, ", i, j);
		
            }
        }
    }

    return 0;
};
