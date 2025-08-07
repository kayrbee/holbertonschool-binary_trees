#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: tree to check
 * Return: 1 if perfect, 0 if not (or if tree empty)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_p = 0, right_p = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left_p = binary_tree_is_perfect(tree->left);
	right_p = binary_tree_is_perfect(tree->right);

	/* Implement return logic 
	 * if left_p not null and right_p not null
	 * could be perfect if subtree also not null
	 * else return 0
	 * */
	return (0);
}
