#!/bin/bash

#include <stdio.h>

/* betty style doc for function main goes there */

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	};
	putchar('\n');
	return (0);
};


