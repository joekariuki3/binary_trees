#include"binary_trees.h"

/**
 * binary_tree_is_full - checkd if the binary tree nodes has 0 or two children
 * @tree: pointer to the root node of the tree to check if it is full
 * Return: returns 1 if full else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* check if a tree is null*/
	if (tree == NULL)
		return (0);
	/* if node does not have any child it is full */
	else if ((tree->left == NULL) && (tree->right == NULL))
		return (1);
	/* if node has two children it is full */
	else if ((tree->left != NULL) && (tree->right != NULL))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
