#include "monty.h"
/**
 * f_teqr - prints the stack
 * @head: stack head
 * @kotari: no used
 * Return: no return
*/
void f_teqr(stack_t **head, unsigned int kotari)
{
	stack_t *mk;
	(void)kotari;

	mk = *head;
	if (mk == NULL)
		return;
	while (mk)
	{
		printf("%d\n", mk->n);
		mk = mk->next;
	}
}
