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

/**
 *Get_left_Uncle- Function that returns the uncle of a Node.
 *
 *@Nd:Node to get its uncle.
 *
 *Return: The @Nd uncle.
 */
binary_tree_t *Get_left_Uncle(binary_tree_t *Nd)
{
	return (Nd->parent->parent->left);
}

/**
*Get_right_Uncle- Function that returns the uncle of a Node.
*
*@Nd:Node to get its uncle.
*
*Return: The @Nd uncle.
*/
binary_tree_t *Get_right_Uncle(binary_tree_t *Nd)
{
	return (Nd->parent->parent->right);
}
/**
 *binary_tree_uncle- Function that finds the uncle of a node.
 *
 *@node: Is a pointer to the node to find the uncle
 *
 *Return:If node is NULL or the parent is NULL, return NULL.
 *-->If node has no uncle, return NULL.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	int height = 0;
	binary_tree_t *tmp = NULL;
	binary_tree_t* (*Func[])(binary_tree_t *) = {Get_left_Uncle,
						     Get_right_Uncle};
	if (!node)
		return (NULL);
	height = binary_tree_depth(node);
	if (height < 2)
		return (NULL);
	tmp = (*Func[node->parent->parent->left == node->parent])(node);
	return (tmp);
}
