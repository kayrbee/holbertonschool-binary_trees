#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_nodes - count nodes with >=1 child node
 * @tree: node to start counting from
 * Return: num nodes or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t sum_l = 0, sum_r = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	sum_l = binary_tree_nodes(tree->left);
	sum_r = binary_tree_nodes(tree->right);

	return ((sum_l + sum_r) + 1);
}

