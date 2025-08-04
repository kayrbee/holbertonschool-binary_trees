#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_insert_left - inserts a child node on the left
 * @parent: pointer to the node to insert the left-child into
 * @value: value of new left-child
 * Return: pointer to new left_child node, or NULL on failure or parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = NULL;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
		new_node->parent = parent;
		parent->left = new_node;
	}
	else
	{
		new_node->parent = parent;
		parent->left = new_node;
	}

	return (new_node);
}

