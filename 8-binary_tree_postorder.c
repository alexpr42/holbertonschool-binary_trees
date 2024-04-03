#include "binary_trees.h"

/**
 * postorder - Performs a post-order traversal on a binary tree
 * @tree: A pointer to the root node of the tree
 * @func: A pointer to a function to call for each node
 */
void postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	postorder(tree->left, func);
	postorder(tree->right, func);
	func(tree->n);
}

/**
 * binary_tree_postorder - Initiates a post-order traversal on a binary tree
 * @tree: A pointer to the root node of the tree
 * @func: A pointer to a function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
		return;

	postorder(tree, func);
}
