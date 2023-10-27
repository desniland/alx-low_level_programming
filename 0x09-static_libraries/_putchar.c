#include <unistd.h>
/*_putchar - function named _putchar
 * Return: Always 0
*/
int _putchar(char c)
{
	return(write(1, &c, 1));
}
