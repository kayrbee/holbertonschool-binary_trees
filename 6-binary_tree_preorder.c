#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_preorder - traverse a tree using preorder
 * @tree: pointer to root node of tree
 * @func: function pointer to desired function
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *node = tree;
	void (*ptr)(int) = func;
	int number;

	if (ptr != NULL)
	{
		if (node != NULL)
		{
			number = node->n;
			ptr(number);
			binary_tree_preorder(node->left, ptr);
			binary_tree_preorder(node->right, ptr);
		}
	}
}

