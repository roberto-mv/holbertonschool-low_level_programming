#include "hash_tables.h"

/**
 * key_index - Gives you the index of a key
 * @key: Calculate
 * @size: Number
 *
 * Return: Index of key
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
