#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_height - measure the height of a tree
 * @tree: pointer to tree to measure
 * Return: size of tree (0 if tree is NULL)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0, null_case = 0;

	if (tree == NULL)
		return (null_case);
	if (tree->left == NULL && tree->right == NULL)
		return (null_case);

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	return ((lh > rh ? lh : rh) + 1);
}

