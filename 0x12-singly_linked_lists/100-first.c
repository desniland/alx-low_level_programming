#include<stdio.h>

/**
* myStartupFun - Apply the constructor attribute to myStartupFun funct so it
 * is executed before main funct
*/
void myStartupFun(void) __attribute__ ((constructor));

/**
 * myStartupFun - implementation of myStartupFun function
*/
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
