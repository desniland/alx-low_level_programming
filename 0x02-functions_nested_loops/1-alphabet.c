#include "main.h"
/**
 * print_alphabet - function that prints the alphabet in lowercase
 * Return: No return value (void)
*/
void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}

