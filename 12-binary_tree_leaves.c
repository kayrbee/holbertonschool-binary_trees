#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_leaves - count the leaves in a binary tree
 * @tree: tree to count
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_left = 0, leaves_right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree != NULL)
	{
		leaves_left = binary_tree_leaves(tree->left);
		leaves_right = binary_tree_leaves(tree->right);
		return (leaves_left + leaves_right);
	}

	return (leaves_left + leaves_right);
}

