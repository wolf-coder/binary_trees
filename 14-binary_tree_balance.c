#include <stdlib.h>
#include "binary_trees.h"

/**
 *Get_max- Function to get the max of x, y.
 *
 *@x:first element.
 *@y:second element.
 *
 *Return:Max of x, y.
 */
size_t Get_max(size_t x, size_t y)
{
	if (x <= y)
		return (y);
	return (x);
}

/**
 *binary_tree_height- Function that measures the height of a binary tree.
 *
 *@tree: Pointer to the root node of the tree to traverse.
 *
 *Return:If tree is NULL, your function must return 0.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (Get_max(binary_tree_height(tree->left),
			binary_tree_height(tree->right)) + 1);
}

/**
 *binary_tree_balance- Function that measures the balance factor of a
 *binary tree
 *
 *@tree: Pointer to the root node of the tree to measure the balance.
 *
 *Return:If tree is NULL, return 0.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
