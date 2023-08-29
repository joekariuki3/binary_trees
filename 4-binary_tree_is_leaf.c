#include"binary_trees.h"

/**
 * binary_tree_is_leaf - check if a node is a leaf
 * @node: pointer to the node to check
 * Return: 1 if node is a leaf and 0 if node is not a leaf or null
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	/* check if either sides of nod has a pointer */
	if (node->left != NULL || node->right != NULL)
		return (0);

	/* both sides is null. its a leaf */
	return (1);
}
