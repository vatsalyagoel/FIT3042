#include <stdlib.h>
#include <string.h>
#include "bst.h"

BST *bst_insert(BST *bst, char *key, void *value)
{
	int cmp;

	if (bst == NULL)
	{
		BST *tmp = (BST *) malloc(sizeof(*tmp));
		if (tmp != NULL)
		{
			tmp -> left = NULL;
			tmp -> right = NULL;
			tmp -> kvp.key = key;
			tmp -> kvp.value = value;
			return tmp;
		}
		else
		{
			exit(EXIT_FAILURE);
		}
	}

	cmp = strcmp(bst -> kvp.key, key);

	if (cmp < 0)
	{
		bst -> right = bst_insert(bst -> right, key, value);
	}
	else if(cmp > 0)
	{
		bst -> left = bst_insert(bst -> left, key, value);
	}

	return bst;
}

KVP *bst_lookup(BST *bst, char *key)
{
	int cmp;

	if(bst == NULL)
	{
		return NULL;
	}

	cmp = strcmp (bst -> kvp.key, key);

	if(cmp < 0)
	{
		return bst_lookup(bst -> right, key);
	}
	else if(cmp > 0)
	{
		return bst_lookup(bst -> left, key);
	}
	else
	{
		return &(bst -> kvp);
	}
}

void bst_free(BST *bst)
{
	if (bst != NULL)
	{
		bst_free(bst -> left);
		bst_free(bst -> right);
		free(bst);
	}
}