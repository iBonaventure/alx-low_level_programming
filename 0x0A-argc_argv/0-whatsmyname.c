#include "main.h"
/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * unused_arg is intentionally unused because it's only needed in certain cases
 * Return: 0 (Success)
 */

int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
