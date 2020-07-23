#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_is_root-Function that checks if a given node is a root.
 *
 *@node: Pointer to the node to check.
 *
 *Return:1 if node is a root, otherwise 0.
 *If node is NULL, return 0.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	const binary_tree_t *tmp = node;

	if (!tmp)
		return (0);
	if (!tmp->parent)
		return (1);
	return (0);
}
