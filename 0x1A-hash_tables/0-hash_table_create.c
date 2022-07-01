#include "hash_tables.h"

/**
 * hash_table_create - creat a hash table
 * @size: size of array
 *
 * Return: pointer to newly created hash table
 * or NULL if something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	/*mallocing space for one hashtable*/
	ht = malloc(sizeof(hash_table_t) * 1);
	if (!ht)
		return (NULL);

	/*initialize size of hashtable ht*/
	ht->size = size;

	/*malloc space for the array that that forms the hashtable*/
	ht->array = malloc(ht->size * sizeof(hash_table_t *));
	if (!ht->array)
		return (NULL);

	/*set all malloced spaces in the array to NULL*/
	for (i = 0; i < ht->size; i++)
		ht->array[i] = NULL;

	return (ht);
}
