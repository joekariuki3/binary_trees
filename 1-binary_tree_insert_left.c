#include"binary_trees.h"

/**
 * binary_tree_insert_left - insers the left child
 * @parent: pointer to the node to insert the left-child
 * @value: int to be stored in the new node
 * Return: pointer to the added node or NULL on failure or if parent is NuLL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *old_left_child = NULL, *new_node = NULL;

	if (parent == NULL)
		return (NULL);
	/* create new node */
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);
	if (parent->left == NULL)
	{
		/* left node is empty add new node as child*/
		parent->left = new_node;
		return (new_node);
	}
	/* if left not has child  store it in tempnode */
	old_left_child = parent->left;
	old_left_child->parent = new_node;
	/* add new node as child of parent*/
	parent->left = new_node;
	/* put the old child to be child of new node*/
	new_node->left = old_left_child;
	return (new_node);
}
