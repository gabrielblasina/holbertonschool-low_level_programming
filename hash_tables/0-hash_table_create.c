#include "hash_tables.h"
/**
*hash_table_create - function to create a new hash table
*Return: pointer to the new hash table
*@size: size of the array
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int idx = 0;
	hash_table_t *nh_table;

	nh_table = malloc(sizeof(hash_table_t));
	if (!nh_table)
		return (NULL);
	nh_table->array = malloc(sizeof(hash_node_t **) * size);
	if (!nh_table->array)
	{
		free(nh_table);
		return (NULL);
	}
	while (idx < size)
	{
		nh_table->array[idx] = NULL;
		idx++;
	}
	nh_table->size = size;
	return (nh_table);
}
