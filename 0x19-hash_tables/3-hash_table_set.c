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
	hash_node_t *new;

	if (!ht || !ht->array || !key || !value || strlen(key) == 0)
	{
		return (0);
	}
	index = key_index((const unsigned char *) key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	if(ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key,key) == 0)
		{
			free(ht->array[index]->value);
			free(new)
			ht->array[index]->value = strdup(value);
			return(1);
		}
		ht->array[index] = ht->array[index]->next;
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		return (0);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		return (0);
	}
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
