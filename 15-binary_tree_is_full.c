#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 *binary_tree_size- Function that measures the size of a binary tree.
 *
 *@tree: Pointer to the root node of the tree to measure the size.
 *
 *Return:If tree is NULL, your function must return 0.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 *power- Function that checks if a binary tree is full.
 *
 *@base: base part.
 *@exp: exp part.
 *Return: @base to the power of @exp.
 */
int power(int base, int exp)
{
	int result = 1;

	while (exp != 0)
	{
		result *= base;
		--exp;
	}
	return (result);
}
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
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (Get_max(binary_tree_height(tree->left),
			binary_tree_height(tree->right)) + 1);
}

/**
 *binary_tree_is_full- Function that checks if a binary tree is full.
 *
 *@tree: Pointer to the root node of the tree to check.
 *
 *Return:If tree is NULL, your function must return 0.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int Height = 0, Size = 0;

	if (!tree)
		return (0);
	Height = binary_tree_height(tree);
	Size = binary_tree_size(tree);
	if (Size == power(2, Height + 1) - 1)
		return (1);
	return (0);
}
