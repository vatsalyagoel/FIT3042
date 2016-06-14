#ifndef FIT_BST_H
#define FIT_BST_H

/* 
 * structure and functions to represent a binary search tree
 * by convention, an empty tree is represented by a NULL pointer
 * at all times, we maintain the invariant that all keys
 * in the left node  are "smaller" than the 
 * current key, and all keys in the right node are larger.  
 * There should be no duplicate keys. 

 */
 
/* KVP represents a key-value pair in a binary search tree*/ 
typedef struct {
	char *key;
	void *value;
} KVP;

/* BST represents a node of the binary search tree */
typedef struct bst {
	struct bst *left;
	struct bst *right;
	KVP kvp;
} BST;


/*
 * insert a key/value pair into the BST
 * only copies the pointers so you should make a copy before
 * insertion if they are subject to change
 * returns: the updated BST.
 */
BST *bst_insert(BST *bst, char *key, void *value);

/*
 * returns a key/value pair from the BST
 * returns null if the key is not present
 */
KVP *bst_lookup(BST *bst, char *key);

#endif
