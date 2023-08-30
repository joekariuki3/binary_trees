#include"binary_trees.h"

/**
 * binary_tree_uncle - looks for a nodes uncle
 * @node: node to check if it has an uncle
 * Return: pointer to the uncles node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle_node = NULL, *parent_node = NULL, *grandparent_node = NULL;

	if (node == NULL)
		return (NULL);
	/* check if node has aparent */
	else if (node->parent == NULL)
		return (NULL);
	/* get the parent */
	parent_node = node->parent;
	/* check if parent has a parent */
	if (parent_node->parent == NULL)
		return (NULL);
	/*get grandparent */
	grandparent_node = parent_node->parent;

	/* get uncle node if exist */
	uncle_node = parent_node == grandparent_node->left ? grandparent_node->right : grandparent_node->left;

	if (uncle_node == NULL)
		return (NULL);
	return (uncle_node);

}
