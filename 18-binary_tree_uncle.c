#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_uncle - find the sibling of a node
 * @node: node to check
 * Return: pointer to sibling node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *grandparent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	parent = node->parent;
	grandparent = parent->parent;
	if (parent == grandparent->left && grandparent->right != NULL)
		return (grandparent->right);
	if (parent == grandparent->right && grandparent->left != NULL)
		return (grandparent->left);

	return (NULL);
}

