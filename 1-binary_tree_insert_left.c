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
	binary_tree_t *Node_cr = NULL;

	if (!parent)
		return (NULL);

	Node_cr = malloc(sizeof(binary_tree_t));
	if (!Node_cr)
		return (NULL);

	Node_cr->n = value;
	Node_cr->left = NULL;
	Node_cr->right = NULL;

	if (!parent->left)
	{
		parent->left = Node_cr;
		Node_cr->parent = parent;
	}
	else
	{
		Node_cr->left = parent->left;
		parent->left = Node_cr;
		Node_cr->parent = parent;
		Node_cr->left->parent = Node_cr;
	}

	return (Node_cr);
}
