#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_root - checks if current node is root
 * @node: node to check
 * Return: 1 if root, 0 if not root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->parent == NULL)
			return (1);
		if (node->left != NULL && node->right != NULL)
			return (1);
	}
	return (0);

}

