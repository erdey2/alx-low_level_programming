#include <stdio.h>

/**
 * execute_before_main - this will execute before main it 
 */

void execute_before_main() __attribute__((constructor));
/**
 * execute_before_main - actual implementation
 */
void execute_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
