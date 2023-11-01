#include "binary_trees.h"

/**
 * binary_tree_leaves - Number of tree_leaves on tree.
 * @tree: root node pointer.
 *
 * Return: The num of tree_leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t tree_leaves = 0;

	if (tree)
	{
		tree_leaves += (!tree->left && !tree->right) ? 1 : 0;
		tree_leaves += binary_tree_leaves(tree->left);
		tree_leaves += binary_tree_leaves(tree->right);
	}
	return (tree_leaves);
}