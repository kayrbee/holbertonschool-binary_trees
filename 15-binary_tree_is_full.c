#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: tree to check
 * Return: 1 if full, 0 if not (or if tree empty)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full = 0, right_full = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left_full = binary_tree_is_full(tree->left);
	right_full = binary_tree_is_full(tree->right);

	if (tree->left != NULL && tree->right != NULL)
		return (left_full && right_full);
	else
		return (0);
}
