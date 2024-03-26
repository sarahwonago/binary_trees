#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree using post-order traverse
 * @tree: Tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: This function traverses the binary tree in post-order, which
 * means it visits the left subtree, then the right subtree, and finally the
 * current node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
