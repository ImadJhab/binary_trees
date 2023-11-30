#include "binary_trees.h"
/**
 * binary_tree_postorder - Insert a new node in the tree
 * @tree: Root of the tree
 * @func: function to excecute
 * Return: Always 0
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree->left)
		binary_tree_postorder(tree->left, func);
	if (tree->right)
	{
		binary_tree_postorder(tree->right, func);
	}
	func(tree->n);
}
