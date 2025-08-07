#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_size - count number of nodes descending
 *                    from the given node
 * @tree: pointer to node to count from
 * Return: number of nodes
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t bt_size_left = 0, bt_size_right = 0;

	if (tree == NULL)
		return (0);
	bt_size_left = binary_tree_size(tree->left);
	bt_size_right = binary_tree_size(tree->right);
	return ((bt_size_left + bt_size_right) + 1);
}

