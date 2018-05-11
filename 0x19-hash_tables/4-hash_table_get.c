#include "hash_tables.h"
/**
 * hash_table_get - function to retrieve value at key
 * @ht: is the hash table
 * @key: is the key being searched
 * Return: associated value if found or NULL if not
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;

	if (!ht || !ht->array || !key || strlen(key) == 0)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *) key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	while (index < ht->size)
	{
		while (ht->array[index])
		{
			if (strcmp(ht->array[index]->key, key) == 0)
				return (ht->array[index]->value);
			ht->array[index] = ht->array[index]->next;
		}
		index++;
	}
	return (NULL);
}
