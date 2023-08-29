#include"binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node
 * @tree: pointer of the node to measure its depth
 * Return: depth of the node or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;
	const binary_tree_t *temp_node = NULL;

	if (tree == NULL)
		return (0);
	temp_node = tree;
	while (temp_node->parent)
	{
		count++;
		temp_node = temp_node->parent;
	}
	return (count);
}
