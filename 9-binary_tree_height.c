#include"binary_trees.h"

/**
 * binary_tree_height - calculates length of a tree
 * @tree: pointer to the node of tre to measur the height
 * Return: height of tree or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_left = 0;
	size_t count_right = 0;

	if (tree == NULL)
		return (0);
	/* calculate length of left subtree if present else length is 0*/
	if (tree->left != NULL)
	{
		count_left = 1 + binary_tree_height(tree->left);
	}
	else
		count_left = 0;

	/* calculate length of right subtree if present else length is 0*/
	if (tree->right != NULL)
	{
		count_right = 1 + binary_tree_height(tree->right);
	}
	else
		count_right = 0;

	/* return the largest length either the left one or the right one*/
	return (count_left > count_right ? count_left : count_right);
}
