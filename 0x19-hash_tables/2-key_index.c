#include "hash_tables.h"
/**
 * key_index - C function to find index of a key
 * @key: pointer to key
 * @size: size of the array of the hash table
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key) % size;
	return (hash);
}
