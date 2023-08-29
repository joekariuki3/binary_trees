#include"binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with aleast one child
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes with atleast 1 child or returns 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* check if a tree is null */
	if (tree == NULL)
		return (0);
	/* check on each side of the node to see if there is a child*/
	/* if there is a child return 1 then continue traversing left and right*/
	/* recussivly checking if there is atleas one child return 1*/
	/* when done combine both sides(left and right subtree) and add total*/
	else if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	/* if each side of the node is null retuen 0. dont add anything*/
	return (0);
}
