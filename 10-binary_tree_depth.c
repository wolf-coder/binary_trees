#include <stdlib.h>
#include "binary_trees.h"


/**
 *binary_tree_depth- Function that measures the depth of a
 *node in a binary tree.
 *
 *@tree: Pointer to the root node of the tree to traverse.
 *
 *Return:If tree is NULL, your function must return 0.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->parent)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);

}
