#include "main.h"
/**
* _isdigit - write a function that check for a digit (0 through 9).
* @x: char to check
* Return:  0 or 1
*/
int _isdigit(int x)
{
if (x >= '0' && x <= '9')
return (1);
else
return (0);
}
