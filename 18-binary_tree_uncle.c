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
	binary_tree_t *parent = node->parent;
	binary_tree_t *grandparent = parent->parent;

	if (node == NULL || parent == NULL || grandparent == NULL)
		return (NULL);
	if (parent == grandparent->left && grandparent->right != NULL)
		return (grandparent->right);
	if (parent == grandparent->right && grandparent->left != NULL)
		return (grandparent->left);

	return (NULL);
}

