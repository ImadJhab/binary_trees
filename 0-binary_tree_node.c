#include "binary_trees.h"
/**
 * binary_tree_node - Insert a new node in the tree
 * @parent: Parent node
 * @value: Value of the node
 * Return: Always 0
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_binary_node;

	new_binary_node = malloc(sizeof(binary_tree_t));
	if (new_binary_node == NULL)
	{
		return (NULL);
	}
	new_binary_node->n = value;

	new_binary_node->left = NULL;
	new_binary_node->right = NULL;
	new_binary_node->parent = parent;

	return (new_binary_node);
}
