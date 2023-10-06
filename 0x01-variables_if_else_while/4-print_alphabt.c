#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x,e,q;
	e = 'e';
	q = 'q';
	for(x='a' ; x<='z' ; x++);
	if(x!=e && x!=q)
	putchar(x);
	putchar('\n');
	return (0);
}
