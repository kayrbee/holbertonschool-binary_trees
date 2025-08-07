#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: tree to check
 * Return: 1 if perfect, 0 if not (or if tree empty)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int ld, rd;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	ld = depth(tree->left);
	rd = depth(tree->right);

	if (ld != rd)
		return (0);

	if (binary_tree_is_perfect(tree->left) == 0 ||
			binary_tree_is_perfect(tree->right) == 0)
		return (0);
	return (1);
}
/**
 * depth - measure depth of tree
 * @tree: tree to measure
 * Return: int depth
 */
int depth(const binary_tree_t *tree)
{
	int dl, dr;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	dl = depth(tree->left);
	dr = depth(tree->right);

	if (dl > dr)
		return (dl + 1);
	else
		return (dr + 1);
}
