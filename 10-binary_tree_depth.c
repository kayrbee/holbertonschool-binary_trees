#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_depth - measure the depth of a tnode
 * @tree: pointer to the node to measure
 * Return: depth of node from root node (0 if tree is null)
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t null_case = 0, depth = -1;

	if (tree == NULL)
		return (null_case);

	if (tree->parent != NULL)
	{
		depth = binary_tree_depth(tree->parent);
	}

	return (depth + 1);

}

