#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_postorder - traverse a tree in post order
 * @tree: tree to traverse
 * @func: function to call with value of node passed in
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}

