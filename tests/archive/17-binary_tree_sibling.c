#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_sibling - find the sibling of a node
 * @node: node to check
 * Return: pointer to sibling node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
	       return (NULL);
	parent = node->parent;
	if (node == parent->left && parent->right != NULL)
		return (parent->right);
	if (node == parent->right && parent->left != NULL)
		return (parent->left);
	
	return (NULL);
}

