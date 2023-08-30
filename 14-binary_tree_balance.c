#include"binary_trees.h"

/**
 * binary_tree_balance - calculates the balance factor of a tree
 * @tree: pointer to root node of tree to calculate the balance factor
 * Return: the balance factor number or return 0 if treee is null
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left = 0, height_right = 0;

	if (tree == NULL)
		return (0);
	/* get height of left subtree*/
	height_left = height(tree->left);
	/* get height of right subtree*/
	height_right = height(tree->right);
	/* get the difference of the two subtrees*/
	return (height_left - height_right);
}
/**
 * height - calculates height of a tree
 * @tree: pointer to the tree node
 * Return: height of the tree or return 0 if null
 */
int height(const binary_tree_t *tree)
{
	int height_left = 0, height_right = 0;

	if (tree == NULL)
		return (-1);
	height_left = tree->left ? 1 + height(tree->left) : 0;
	height_right = tree->right ? 1 + height(tree->right) : 0;

	return (height_left > height_right ? height_left : height_right);
}
