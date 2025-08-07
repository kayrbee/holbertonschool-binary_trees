#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_balance - measure balance factor of a tree
 * @tree: tree to measure
 * Return: integer of balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_bal = 0, right_bal = 0;

	if (tree == NULL)
		return (0);
	left_bal = height(tree->left);
	right_bal = height(tree->right);

	return (left_bal - right_bal);
}
/**
 * height - measure the height of a tree
 * @tree: tree to measure height of
 * Return: height of tree
 */
int height(const binary_tree_t *tree)
{
	int left_h = 0, right_h = 0;

	if (tree == NULL)
		return (-1);
	left_h = height(tree->left);
	right_h = height(tree->right);
	return ((left_h > right_h ? left_h : right_h) + 1);

}
