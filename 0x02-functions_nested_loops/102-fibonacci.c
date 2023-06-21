#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int count;
unsigned long num1, num2, sum;
for(count =0;count<=50;count++){

	num1=0;
	num2 = 1;
	sum = num1 + num2;
	printf("%lu",sum);

        /*Next loop*/
	num1= num2;
	num2= sum;

	/*Break syntaxe*/
	if(count<=50){
		printf(",");
	}else{
		printf("\n");
	}
	return(0);
}
