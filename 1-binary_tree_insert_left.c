#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_insert_left- Function that inserts
 *a node as the left-child of another node.
 *
 *@parent: Pointer to the node to insert the left-child in.
 *@value: The value to put in the new node.
 *
 *Return:return a pointer to the created node,or
 *NULL on failure or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp_Node = malloc(sizeof(binary_tree_t));


	if (!parent || !tmp_Node)
		return (NULL);

	tmp_Node->n = value;
	tmp_Node->left = NULL;
	tmp_Node->right = NULL;

	if (!parent->left)
		parent->left = tmp_Node;
	else
	{
		tmp_Node->left = parent->left;
		parent->left = tmp_Node;
		tmp_Node->parent = parent;
		tmp_Node->left->parent = tmp_Node;
	}

	return (tmp_Node);
}
