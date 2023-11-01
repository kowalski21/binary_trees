#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node as left child
 * @parent: A pointer to the node.
 * @value: the node value.
 *
 * Return: if error return NULL else new_tree pointer

 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree;

	if (parent == NULL)
		return (NULL);

	new_tree = binary_tree_node(parent, value);
	if (new_tree == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_tree->left = parent->left;
		parent->left->parent = new_tree;
	}
	parent->left = new_tree;

	return (new_tree);
}