#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_inorder - traverse a tree in order
 * @tree: pointer to root node
 * @func: function to call, called with value from current node
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	void (*ptr)(int) = func;
	const binary_tree_t current_node = tree;
	int value;

	if (ptr != NULL)
	{
		if (current_node != NULL)
		{
			value = current_node->n;
			binary_tree_inorder(current_node->left, ptr);
			ptr(value);
			binary_tree_in_order(current_node->right, ptr);
		}
	}
}

