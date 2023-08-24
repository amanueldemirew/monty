#include "monty.h"
meyez_t meyez = {NULL, NULL, NULL, 0};
/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *west;
	FILE *file;
	size_t size = 0;
	ssize_t menbebe = 1;
	stack_t *stack = NULL;
	unsigned int kotare = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	meyez.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (menbebe > 0)
	{
		west = NULL;
		menbebe = getline(&west, &size, file);
		meyez.west = west;
		kotare++;
		if (menbebe  > 0)
		{
			seri(west, &stack, kotare, file);
		}
		free(west);
	}
	leke(stack);
	fclose(file);;
return (0);
}
