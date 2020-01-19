hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tab = NULL;

	if (size == 0)
		return (NULL);
	tab = malloc(sizeof(hash_table_t));

	if (tab == NULL)
	{
		return (NULL);
	}
	tab->size = size;
	tab->array = malloc(sizeof(hash_node_t *) * size);
	if (tab->array == NULL)
	{
		free(tab);
		return (NULL);
	}
	return (tab);
}
