#include "hash_tables.h"
/**
 * hash_table_create - C function to create a hash table
 * @size: size of hash table, unsigned long int type
 * Return: returns a pointer to newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int count;
	hash_table_t *table = NULL;

	/* allocate memory for hash table*/
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	/*allocate memory for node in hash table*/
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (count = 0; count < size; count++)
	{
		table->array[count] = NULL;
	}
	return (table);
}
