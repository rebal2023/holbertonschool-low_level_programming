#include "hash_tables.h"
/**
* hash_table_set - function that adds an element to the hash table
* @ht: pointer to the hash tableyou want to add/update key/value
* @key: key of the added element to the hash table
* @value: pair value of the key
* Return: 0 or 1
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new;
char *value_dup;
unsigned long int index, i;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);
value_dup = strdup(value);
if (value_dup == NULL)
return (0);
index = key_index((const unsigned char *)key, ht->size);

for (i = index; ht->array[i]; i++)
{
if (strcmp(ht->array[i]->key, key) == 0)
{
free(ht->array[i]->value);
ht->array[i]->value = value_dup;
return (1);
}
}
new = malloc(sizeof(hash_node_t));
if (new == NULL)
{
free(value_dup);
return (0);
}
new->key = strdup(key);
if (new->key == NULL)
{
free(new);
return (0);
}
new->value = value_dup;
new->next = ht->array[index];
ht->array[index] = new;
return (1);
}
