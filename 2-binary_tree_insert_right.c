#include "binary_trees.h"

/**
 * binary_tree_insert_right - The function binary_tree_insert_right
 *		inserts a new node with the given value as the right child
 *		of the parent node.
 *
 * @parent: The parent parameter is a pointer to the parent node
 *		of the binary tree.
 * @value: The value parameter is an integer value that you want
 *		to insert into the binary tree.
 *
 * Return: a pointer to the parent node of the binary tree.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp = NULL;

	if (!parent)
	{
		return (NULL);
	}
	if (!parent->right)
	{
		parent->right = binary_tree_node(parent, value);
		return (parent);
	}
	tmp = parent->right;
	parent->right = binary_tree_node(parent, value);
	parent->right->right = tmp;
	tmp = NULL;
	return (parent);
}
