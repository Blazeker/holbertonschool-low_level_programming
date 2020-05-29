#include "hash_tables.h"
/**
 * key_index - gets the index of given key
 * @key: str containing key
 * @size: size of the hash table
 * Return: index of given key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_key;

	hash_key = hash_djb2((unsigned char *)key);
	return (hash_key % size);
}
