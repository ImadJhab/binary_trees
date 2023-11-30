#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a node to the left
 * @parent: Parent node
 * @value:  value
 * Return: The node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node, *left_child;

	if (!parent)
		return (NULL);

	new_left_node = binary_tree_node(parent, value);
	if (!new_left_node)
		return (NULL);

	if (parent->left)
	{
		left_child = parent->left;
		parent->left = new_left_node;
		new_left_node->left = left_child;
		left_child->parent = new_left_node;
	}
	else
	{
		parent->left = new_left_node;
	}
	return (new_left_node);
}
