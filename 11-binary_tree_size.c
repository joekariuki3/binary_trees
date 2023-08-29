#include"binary_trees.h"

/**
 * binary_tree_size - shows number of node of a tree
 * @tree: pointer to root node of tree to be measured
 * Return: size of the tree or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + (binary_tree_size(tree->left) + binary_tree_size(tree->right)));
}
