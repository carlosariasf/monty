#include "monty.h"
/**
 * main - Main proyect monty
 * @ac: Number of arguments
 * @av: Arguments
 * Return: Errors
 **/
int main(int ac, char **av)
{
    int fp, fr, i;
    char *buffer, *token, *argumts[1024], delimit[] = "/\n";
	int countargt = 0;
    
    if (ac == 2)
    {
        fp = open(av[1], O_RDONLY);
        if (fp < 1)
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
            printf("Error: Can't open file %s\n", argumts[i-1]);
			exit(EXIT_FAILURE);
        }
    buffer = malloc(sizeof(char) * 1024);
	if(!buffer)
		{
			printf("Error: malloc failed"), exit(EXIT_FAILURE);
		}
    	fr = read(fp, buffer, 1024);
		if (fr == -1)
			exit(EXIT_FAILURE);
		printf("%d\n", numlines(buffer));
		close(fr);
    }
return (0);
}

int numlines(char *buffer)
    {
        char *cbuffer = malloc(sizeof(char) * 1024), delimit[] = "\n", *token;
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
