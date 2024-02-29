#include "binary_trees.h"

/**
 * binary_tree_preorder - This pass in a binary tree using pre-order traversal.
 * @Author kingsley
 * @tree: This point to root node of the tree to traverse.
 * @func: This point to function to call for each node.
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
