#include"binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node that is being created
 * @value: int data to be added to the node
 * Return: NULL on failure and Pointer of created node on sucess
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnodeptr = NULL;

	newnodeptr = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (newnodeptr == NULL)
		return (NULL);
	newnodeptr->n = value;
	newnodeptr->parent = parent;
	newnodeptr->left = NULL;
	newnodeptr->right = NULL;

	return (newnodeptr);
}
