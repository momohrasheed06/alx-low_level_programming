#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
	char school;

	for (school = 'a'; school <= 'z'; school++)
		putchar (school);
	putchar('\n');
	return (0);
}
