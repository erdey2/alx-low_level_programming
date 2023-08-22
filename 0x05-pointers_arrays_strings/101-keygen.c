#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define STRLEN 14
/**
 * random_char - generates a random password
 * @index: the index of the string
 * Return: a random password
 */
char random_char(int index) 
{
	char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_+@%!- ";
	return charset[index];
}
/**
 * main - entry point
 *
 * Reurn: Always 0 (Success)
 */
int main(void) 
{
	srand(time(NULL));
	char str[STRLEN];
	int i, index;

	for (i = 0; i <= STRLEN - 1; i++) 
	{
		index = rand() % 69;
		str[i] = random_char(index);
	}
	str[i] = '\0';
	printf("%s\n", str);
	exit(0);
}
