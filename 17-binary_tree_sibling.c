#include <stdlib.h>
#include "binary_trees.h"

/**
 *Get_left_Sibling- Function that returns the sibling of a Node.
 *
 *@Nd:Node to get its sibling.
 *
 *Return: The @Nd sibling.
 */
binary_tree_t *Get_left_Sibling(binary_tree_t *Nd)
{
	return (Nd->parent->left);
}

/**
*Get_right_Sibling- Function that returns the sibling of a Node.
*
*@Nd:Node to get its sibling.
*
*Return: The @Nd sibling.
*/
binary_tree_t *Get_right_Sibling(binary_tree_t *Nd)
{
	return (Nd->parent->right);
}
/**
 *binary_tree_sibling- Function that finds the sibling of a node.
 *
 *@node: Is a pointer to the node to find the sibling
 *
 *Return:If node is NULL or the parent is NULL, return NULL.
 *-->If node has no sibling, return NULL.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tmp = NULL;

	binary_tree_t* (*Func[])(binary_tree_t *) = {Get_left_Sibling,
						    Get_right_Sibling};
	if (!node || !node->parent)
		return (NULL);
	tmp = (*Func[node->parent->left == node])(node);
	return (tmp);
}
