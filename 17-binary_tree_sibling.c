#include"binary_trees.h"

/**
 * binary_tree_sibling - checks if a node has a sibling
 * @node: node to check if it has a sibling
 * Return: pointer to the sibling or null
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent_node = NULL, *sibling_node = NULL;

	if (node == NULL)
		return (NULL);
	/* if node does not have a parent return NULL */
	else if (node->parent == NULL)
		return (NULL);
	/* get parent_node*/
	parent_node = node->parent;
	/*
	 * check if node is left child or right of its parent
	 * (parent_node) then the other one is the sibling
	 */
	sibling_node = node == parent_node->left ?
		parent_node->right : parent_node->left;
	if (sibling_node == NULL)
		return (NULL);
	return (sibling_node);
}
