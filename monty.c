#include "monty.h"
int value;
/**
 * main - Main proyect monty
 * @ac: Number of arguments
 * @av: Arguments
 * Return: Errors
 **/
int main(int ac, char **av)
{
	FILE *fp;
	int i;
	stack_t *head = NULL;
	char *token, *argumts[1024], delimit[] = "/\n";
	int countargt = 0;

	if (ac == 2)
	{
	fp = fopen(av[1], "r");
	if (fp == NULL)
		{
		token = strtok(av[1], delimit);
		while (token != NULL)
		{
			argumts[countargt] = token;
			token = strtok(NULL, delimit);
			countargt++;
		}
		for (i = 0; argumts[i] != NULL; i++)
		;
		printf("Error: Can't open file %s\n", argumts[i - 1]);
			exit(EXIT_FAILURE);
		}
		callfunc(fp, head);
		fclose(fp);
	}
	return (0);
}

/**
 * callfunc - call the function
 * @fp: file already open
 * @head: the head of the doubly linked list
 * Return: void function
 */
void callfunc(FILE *fp, stack_t *head)
{
	char *bufferc, *token, *argumts[1024], delimit[] = " \n";
	size_t bufsize = 32;
	int countargt = 1;

	bufferc = (char *)malloc(bufsize * sizeof(char));
	while (getline(&bufferc, &bufsize, fp) != EOF)
	{
		token = strtok(bufferc, delimit);
		argumts[0] = token;
		if (!token)
			free(bufferc);
		while (token != NULL)
		{
			token = strtok(NULL, delimit);
			argumts[countargt] = token;
			countargt++;
		}
		if (countargt > 0)
			value = atoi(argumts[1]);
		(*get_op_func(argumts[0]))(&head, countargt);
	}
	free(bufferc);
}

/**
 * numlines - counts the number of lines
 * @buffer: content  of the file.
 * Return: the number of lines.
 */
int numlines(char *buffer)
{
	char *cbuffer = malloc(sizeof(char) * 1024), delimit[] = " \n", *token;
	int countargt = 0;

	memcpy(cbuffer, buffer, 1024);
	token = strtok(cbuffer, delimit);
	while (token != NULL)
	{
		token = strtok(NULL, delimit);
		countargt++;
	}
	free(cbuffer);
	return (countargt);
}
