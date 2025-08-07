#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * count_nodes - helper to count nr nodes in tree
 * @tree: tree to check
 * Return: number of nodes
 */
int count_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + count_nodes(tree->left) + count_nodes(tree->right));
}
/**
 * completeness_helper - checks if a binary tree is full
 * @tree: tree to check
 * Return: 1 if full, 0 if not (or if tree empty)
 */
int completeness_helper(const binary_tree_t *tree, int index, int num_nodes)
{
	if (tree == NULL)
		return (-1);
	if (index >= num_nodes)
		return (1);
	return (completeness_helper(tree->left, 2*index + 1, num_nodes) && completeness_helper(tree->right, 2*index + 2, num_nodes));
}
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: tree to check
 * Return: 1 if full, 0 if not (or if tree empty)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int num_nodes = 0;
	int index = 0;

	if (tree == NULL)
		return (0);

	num_nodes = count_nodes(tree);
	return (completeness_helper(tree, index, num_nodes));	
}

