#include"binary_trees.h"

/**
 * binary_tree_insert_right - insert the right child
 * @parent: pointer to the node to insert the right-child
 * @value: int to be stored in the new node
 * Return: pointer to the added node or NULL on failure or if parent is NuLL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *old_right_child = NULL, *new_node = NULL;

	if (parent == NULL)
		return (NULL);
	/* create new node */
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);
	if (parent->right == NULL)
	{
		/* left node is empty add new node as child*/
		parent->right = new_node;
		return (new_node);
	}
	/* if left not has child  store it in tempnode */
	old_right_child = parent->right;
	/* make new node parent of old child*/
	old_right_child->parent = new_node;
	/* add new node as child of parent*/
	parent->right = new_node;
	/* put the old child to be child of new node*/
	new_node->right = old_right_child;
	return (new_node);
}
