#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_node-  Function that creates a binary tree node.
 *
 *@parent: Pointer to the parent node of the node to create.
 *@value: The value to put in the new node.
 *
 *Return:pointer to the new node, or NULL on failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp_Node = malloc(sizeof(binary_tree_t));

	if (!tmp_Node)
		return (NULL);
	tmp_Node->parent = parent;
	tmp_Node->n = value;
	tmp_Node->left = NULL;
	tmp_Node->right = NULL;
	return (tmp_Node);
}
