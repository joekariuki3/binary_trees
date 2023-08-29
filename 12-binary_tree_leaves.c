#include"binary_trees.h"

/**
 * binary_tree_leaves - counts number of leaf nodes in a tree
 * @tree: pointer to root node to count number of leaf nodes in it
 * Return: number of leaf nodes or 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* check if a tree is null*/
	if (tree == NULL)
		return (0);
	/* check if a node is leaf  if yes return 1*/
	else if (tree->left == NULL && tree->right == NULL)
		return (1);
	/* recusivly visit each node left subtree and also right subtree*/
	/* if it finds a leaf it returns 1 hence adding up all the leafs*/
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
