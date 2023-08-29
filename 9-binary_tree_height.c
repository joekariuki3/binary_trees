#include"binary_trees.h"

/**
 * binary_tree_height - calculates length of a tree
 * @tree: pointer to the node of tre to measur the height
 * Return: height of tree or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t count_left = binary_tree_height(tree->left);
	size_t count_right = binary_tree_height(tree->right);

	return ((count_left > count_right ? count_left : count_right) + 1);
}
