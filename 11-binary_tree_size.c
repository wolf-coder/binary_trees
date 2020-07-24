#include <stdlib.h>
#include "binary_trees.h"


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
