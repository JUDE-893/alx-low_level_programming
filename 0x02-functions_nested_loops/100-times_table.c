include<main.h>

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n){
       if(n>=0 && n<=15;n++){
       int i,j,k;
       if(i=0;i<=n;i++){
	       if(j=0;j<=i;j++){
		       k = i*j;

		       if(k<=10){
			       _putchar("k");
			       _putchar(",");
			       _putchar(" ");
			       _putchar(" ");
		       }else if (k >= 10 && k < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				} else if (k >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}


