#include "binary_trees.h"

/**
 * binary_tree_nodes - calc_num count on child.
 * @tree: root node pointer.
 *
 * Return: 0 if NULL else num calc.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t calc_num = 0;

	if (tree)
	{
		calc_num += (tree->left || tree->right) ? 1 : 0;
		calc_num += binary_tree_nodes(tree->left);
		calc_num += binary_tree_nodes(tree->right);
	}
	return (calc_num);
}