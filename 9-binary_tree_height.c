#include "binary_trees.h"

/**
 * binary_tree_height - gets the height of binary tree.
 * @tree: root node pointer.
 *
 * Return: 0 if root node NULL else height calc.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left = 0, right_node = 0;

		left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right_node = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((left > right_node) ? left : right_node);
	}
	return (0);
}