#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: Tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: This function traverses the binary tree in in-order, which
 * means it visits the left subtree of the current node, then the current node,
 * and finally the right subtree.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
