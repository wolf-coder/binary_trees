#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_insert_right- Function that inserts
 *a node as the right-child of another node.
 *
 *@parent: Pointer to the node to insert the right-child in.
 *@value: The value to put in the new node.
 *
 *Return:return a pointer to the created node,or
 *NULL on failure or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp_Node = NULL;

	if (!parent)
		return (NULL);
	tmp_Node = malloc(sizeof(binary_tree_t));
	if (!tmp_Node)
		return (NULL);
	tmp_Node->n = value;
	tmp_Node->left = NULL;
	tmp_Node->right = NULL;

	if (!parent->right)
	{
		parent->right = tmp_Node;
		tmp_Node->parent = parent;
	}
	else
	{
		tmp_Node->right = parent->right;
		parent->right = tmp_Node;
		tmp_Node->parent = parent;
		tmp_Node->right->parent = tmp_Node;
	}

	return (tmp_Node);
}
