#include "binary_trees.h"
/**
* binary_tree_insert_right - Inserts a node as the right child
*
* @parent: A pointer to the parent node of node to insert the right child
* @value: value property of the node
*
* Return: The new node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right;

	if (parent == NULL)
		return (NULL);

	new_right = binary_tree_node(parent, value);

	if (new_right == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_right->right = parent->right;
		parent->right->parent = new_right;
	}

	parent->right = new_right;

	return (new_right);
}
