#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_is_leaf- function that checks if a node is a leaf.
 *
 *@node: Pointer to the node to check.
 *
 *Return:1 if node is a leaf, otherwise 0.
 *If node is NULL, return 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	const binary_tree_t *tmp = node;

	if (!tmp)
		return (0);
	if (!tmp->left &&  !tmp->right)
		return (1);
	return (0);
}
