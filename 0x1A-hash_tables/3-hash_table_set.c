#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - sets a hash table key
 * @ht: hash table
 * @key: key to generate hash value
 * @value: value
 * Return: 1 on success or 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int key_i = 0;
	char *val_copy = NULL, *key_copy = NULL;
	hash_node_t *new_node = NULL, *temp_node = NULL;

	if (!ht || !key || !value)
		return (0);
	else if (strlen(key) == 0)
		return (0);
	val_copy = strdup(value);
	if (!val_copy)
		return (0);
	key_copy = strdup(key);
	if (!key_copy)
	{
		free(val_copy);
		return (0); }
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free(key_copy), free(val_copy);
		return (0); }
	new_node->key = key_copy;
	new_node->value = val_copy, new_node->next = NULL;
	key_i = key_index((unsigned char *)key, ht->size);
	if ((ht->array)[key_i] != NULL)
	{
		temp_node = (ht->array)[key_i];
		while (temp_node)
		{
			if (strcmp(temp_node->key, key_copy) == 0)
			{
				free(ht->array[key_i]->value);
				ht->array[key_i]->value = val_copy;
				free(key_copy), free(new_node);
				return (1); }
			temp_node = temp_node->next; }
		temp_node = (ht->array)[key_i], new_node->next = temp_node;
		(ht->array)[key_i] = new_node; }
	else
		(ht->array)[key_i] = new_node;
	return (1); }
