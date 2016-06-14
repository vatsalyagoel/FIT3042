#include "bst.h"

BST *bst_insert(BST *bst, char *key, void *value)
{
	int cmp;

	if (BST == NULL)
	{
		BST *tmp = (BST *) malloc(sizeof(*tmp));

		tmp -> left = NULL;
		tmp -> right = NULL;
		tmp -> key.key = key;
		tmp -> key.value = value;

		return tmp;
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

}