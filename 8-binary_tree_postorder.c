#include"binary_trees.h"

/**
 * binary_tree_postorder - prints the tree left, right, thrn root last
 * @tree: pinter to the root node
 * @func: fuction called to print value n of a node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	/*recuss while first moveing to the left*/
	binary_tree_postorder(tree->left, func);

	/* recuss while moving to the right */
	binary_tree_postorder(tree->right, func);

	/* print value of n of each node*/
	func(tree->n);
}
