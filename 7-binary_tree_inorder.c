#include"binary_trees.h"

/**
 * binary_tree_inorder - prints the tree left,root,right
 * @tree: ponter to the root element
 * @func: function to be called at each root
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* first go to left side */
	binary_tree_inorder(tree->left, func);

	/* print value of left first*/
	func(tree->n);

	/* then head to right*/
	binary_tree_inorder(tree->right, func);
}
