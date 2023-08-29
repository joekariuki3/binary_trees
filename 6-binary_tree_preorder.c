#include"binary_trees.h"

/**
 * binary_tree_preorder - prints the tree root,left,right
 * @tree: pointer to the root of the tree
 * @func: function to call on each travasal
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	/* print root first*/
	func(tree->n);
	/* recuss then print root of left first*/
	binary_tree_preorder(tree->left, func);
	/* recuss then print root of right first*/
	binary_tree_preorder(tree->right, func);
}
