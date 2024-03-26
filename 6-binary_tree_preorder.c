#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 * @tree: Tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: This function traverses the binary tree in pre-order, which
 * means it visits the current node, then its left subtree, and finally its
 * right subtree.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
