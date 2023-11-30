#include "binary_trees.h"
/**
 * binary_tree_insert_right - Insert a new node in the tree
 * @parent: Parent node
 * @value: Value of the node
 * Return: Always 0
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_node, *right_child;

	if (!parent)
	{
		return (NULL);
	}
	new_right_node = binary_tree_node(parent, value);

	if (!new_right_node)
	{
		return (NULL);
	}
	if (parent->right)
	{
		right_child = parent->right;
		parent->right = new_right_node;
		new_right_node->right = right_child;
		right_child->parent = new_right_node;
	}
	else
	{
		parent->right = new_right_node;
	}
	return (new_right_node);
}
