#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse using pre-order.
 * @tree: A pointer to the root node.
 * @func: function pointer to call for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}