#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int rootDepth = 0, isPerfect = 0;

	if (tree == NULL)
		return (1);
	rootDepth = calculateDepth(tree);
	isPerfect = isPerfectTree(tree, 0, rootDepth);

	return (isPerfect);
}

/**
 * calculateDepth - calculates the depth of the node passed to it
 * @tree: pointer to the node to calculate its deapth
 * Return: Depth of a node or 0
 */
int calculateDepth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + calculateDepth(tree->left));
}

/**
 * isPerfectTree - check if all leafs are in expected level
 * @tree: pointer to a root node to check if the tree is perfect
 * @depth: depth of passed node. check if is same as expextedDepth
 * @expectedDepth: depth of one of the leaf nodes (all
 * leaf should be on save depth)
 * Return: 1 if all leafs are in same dethp and 0 if not
 */
int isPerfectTree(const binary_tree_t *tree, int depth, int expectedDepth)
{
	if (tree == NULL)
		return (depth == expectedDepth);
	return (isPerfectTree(tree->left, depth + 1, expectedDepth) &&
			isPerfectTree(tree->right, depth + 1, expectedDepth));
}
