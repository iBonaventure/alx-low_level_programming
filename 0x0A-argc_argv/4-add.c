#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - Check - string there are digit
 * @str: arrayv str
 * Return: Always 0
 */

int check_num(char *str)
{
	/*Declareing variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*This counts strings*/
	{
		if (!isdigit(str[count])) /*This checks if str there are digit*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - This prints the name of the program
 * @argc: This counts arguments
 * @argv: Arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;
}
	count = 1;
	while (count < argc) /*Goes through the whole array*/
{
	if (check_num(argv[count]))
	{
		str_to_int = atoi(argv[count]); /*ATOI --> converts string to *int*/
		sum += str_to_int;
	}
	/*condition if one of the nums contains symbols that arent digits*/
	else
	{
		printf("Error\n");
		return (1);
	}
	count++;
}
printf("%d\n", sum); /*This prints sum*/
return (0);
}

