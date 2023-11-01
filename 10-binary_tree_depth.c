#include "binary_trees.h"

/**
 * binary_tree_depth - Gets the dept of node tree.
 * @tree: pointe to root node.
 *
 * Return: 0 if NULL else depth calc.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}