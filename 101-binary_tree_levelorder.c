#include"binary_trees.h"
/* using an array as queu*/
# define QUEUSIZE 256
binary_tree_t *queu[QUEUSIZE];
int front = -1, back = -1;
/**
 * binary_tree_levelorder - print nodes in atree in per level from top
 * @tree: pointer to the root of tree
 * @func: used to print the value
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *current = NULL, *root = NULL;

	/* typecast const binary_tree_t to binary_tree_t n save to root*/
	root = (binary_tree_t *)tree;

	if (root == NULL)
		return;

	/* add root to the queu*/
	enqueu(root);

	/* while the queu is not empty loop*/
	while (front != -1 && back != -1)
	{
		/* remove current node from queu */
		current = dequeu();
		/* print the current node value*/
		func(current->n);

		/* check if current node has left child and add to queue*/
		if (current->left)
			enqueu(current->left);
		/* check if current node has right child and add to queue*/
		if (current->right)
			enqueu(current->right);
	}
}
/**
 * enqueu - add node to queu
 * @node: node to be added in queu
 */
void enqueu(binary_tree_t *node)
{
	/* if node is empty*/
	if (node == NULL)
		return;
	/* check if queu is full*/
	else if (back == QUEUSIZE - 1)
	{
		printf("Queu is full\n");
		return;
	}
	/* if queu is empty add first element (node) */
	else if (front == -1 && back == -1)
	{
		front = 0;
		back = 0;
		queu[back] = node;
	}
	/* if queu has some values add new element (node) */
	else
	{
		back++;
		queu[back] = node;
	}

}

/**
 * dequeu - remove node from queu from front
 * Return: returns the removed node or NULL
 */
binary_tree_t *dequeu()
{
	binary_tree_t *current = NULL;

	/* check if queu is empty*/
	if (front == -1 && back == -1)
	{
		printf("Queu is Empty\n");
		return (current);
	}
	/*check if queu has only one value after deleting it should make queu empty*/
	else if (front == back)
	{
		current = queu[front];
		front = -1;
		back = -1;
		return (current);
	}
	/* queu has more than one element delete front element*/
	else
	{
		current = queu[front];
		front++;
		return (current);
	}
	return (NULL);
}
