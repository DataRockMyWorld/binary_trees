#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 *
 * @node: The tree to delete
 *
 * Return: The new node
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}
