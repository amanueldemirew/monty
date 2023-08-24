#include "monty.h"
/**
 * f_gefi - add node to the stack
 * @head: stack head
 * @kotari: line_number
 * Return: no return
*/
void f_gefi(stack_t **head, unsigned int kotari)
{
	int n, j = 0, flag = 0;

	if (meyez.arg)
	{
		if (meyez.arg[0] == '-')
			j++;
		for (; meyez.arg[j] != '\0'; j++)
		{
			if (meyez.arg[j] > 57 || meyez.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", kotari);
			fclose(meyez.file);
			free(meyez.west);
			leke(*head);
			exit(EXIT_FAILURE); }}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", kotari);
		fclose(meyez.file);
		free(meyez.west);
		leke(*head);
		exit(EXIT_FAILURE); }
	n = atoi(meyez.arg);
	if (meyez.bezat == 0)
		nodechmr(head, n);
	else
		queuechmr(head, n);
}
