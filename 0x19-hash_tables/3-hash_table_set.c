#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to a hash table
 * @ht: is the hash table to be updated
 * @key: key cannot be empty
 * @value: value to be associated to the key
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new, *temp;

	if (!ht || !ht->array || !key || !value || strlen(key) == 0)
	{
		return (0);
	}
	if (strcmp("", key) == 0)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			free(new);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
