#include "monty.h"
/**
 * op_push - function to push node to head of stack
 * @stack: double pointer of stack_t type to head of doubly linked list
 * @line_number: unsigned int type for data
 * Return: no return in function
 */
void op_push(stack_t **stack, unsigned int line_number)
{
	stack_t *temp, *node = malloc(sizeof(stack_t));

	if (node == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	node->n = line_number;
	node->prev = NULL;
	node->next = NULL;

	if (*stack == NULL)
	{
		node->next = NULL;
		*stack = node;
		return (*stack);
	}
	temp = *stack;
	node->next = temp;
	temp->next = node;
	*stack = node;
}

/**
 * op_pall - function to print all elements in a stack
 * @stack: double pointer of type stack_t to head of doubly linked list
 * @line_number: unsigned int for line number(void in this function)
 * Return: no return, print list
 */
void op_pall(stack_t **stack, unsigned int line_number)
{
	(void) line_number;

	if (stack == NULL)
		exit(EXIT_FAILURE);

	while (stack != NULL)
	{
		printf("%d\n", stack->n);
		stack = stack->next;
	}
}
/**
 * op_pint - function to print the value at the top of a stack
 * @stack: double pointer of stack_t type to head of stack
 * @line_number: unsigned int for line number
 * Return: print the value at the first element of stack
 */
void op_pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		printf("L%d: can't pint, stack empty", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
/**
 * op_pop - function to remove node at head of stack
 * @stack: double pointer of stack_t type to head of doubly linked list
 * @line_number: unsigned int for line_number to be deleted
 * Return: no return in function, delete node at head of stack
 */
void op_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		printf("L:%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->next == NULL)
	{
		free(*stack);
		*stack = NULL;
	}
	else
	{
		temp = (*stack)->next;
		(*stack) = temp;
		temp = temp->prev;
		(*stack)->prev = NULL;
		free(temp);
	}
}

/**
 * op_swap - function to swap the values of the top elements of a linked list
 * @stack: double pointer of stack_t type to head of doubly linked list
 * @line_number: unsigned int type of line number
 * Return: no return in this function
 */
void op_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL || stack == NULL)
	{
		printf("L%d: can't swap, stack too short\n");
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->next;
	(*stack)->prev = temp;
	(*stack)->next = temp->next;
	temp->prev = NULL;
	temp->next = *stack;
	*stack = temp;
}
