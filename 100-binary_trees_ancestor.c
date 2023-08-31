#include"binary_trees.h"

/**
 * binary_tree_acestor - gets the lowest common ancestors of two nodes
 * @first: one of the node to get its common ancestor
 * @second: the other node to get the common ancestor
 * Return: pointer to the common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{

	binary_tree_t *root = NULL;

	/*find root*/
	if (first || second)
		root = (binary_tree_t *)first;
	while (root->parent)
		root = root->parent;

	return (lca(root, (binary_tree_t *)first, (binary_tree_t *)second));
}
/**
 * lca - helper function to get lowest common ancestor or two nodes
 * @root: root node of the tree
 * @first: first none
 * @second: second node
 * Return: null or pointer to lowest common ancestor
 * of @first and @second
 */
binary_tree_t *lca(binary_tree_t *root, binary_tree_t
		*first, binary_tree_t *second)
{
	binary_tree_t *left = NULL, *right = NULL;

	if (root == NULL)
		return (NULL);
	/* check if it is only one node with no children */
	if (root == first || root == second)
		return (root);
	/* recuss the left subtree */
	left = lca(root->left, first, second);
	/* recuss the right tree*/
	right = lca(root->right, first, second);
	if (left != NULL && right != NULL)
		return (root);
	if (left == NULL && right == NULL)
		return (NULL);
	return (left != NULL ? left : right);
}
