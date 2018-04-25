#include "monty.h"

/**
 *
 */
char **tokenizer(char *string)
{
	char *str_tok, **tokens;
	int num_tokens = 0, i = 0;

	num_tokens = tok_num(string);
	tokens = malloc(sizeof(char *) * num_tokens);
	if (tokens == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	str_tok = strtok(string, delim);
	while (str_tok != NULL)
	{
		tokens[i] = str_tok;
		i++;
		str_tok = strtok(NULL, delim);
	}
	return (tokens);

}
