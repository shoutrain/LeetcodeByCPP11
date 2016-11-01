/*
 * UniqueBinarySearchTreesII.cpp
 *
 *  Created on: Oct 11, 2016
 *      Author: rafael
 */

#include "UniqueBinarySearchTreesII.h"

TreeNode *UniqueBinarySearchTreesII::clone(TreeNode *tree) {
	if (tree == nullptr) {
		return nullptr;
	}

	TreeNode *result = new TreeNode(tree->val);

	result->left = clone(tree->left);
	result->right = clone(tree->right);

	return result;
}

vector<TreeNode *> UniqueBinarySearchTreesII::generateTrees(int n) {
	vector<TreeNode *> trees;

	if (n == 0) {
		return trees;
	}

	trees.push_back(nullptr);

	for (int i = 1; i <= n; i++) {
		vector<TreeNode *> tmp;

		for (auto tree : trees) {
			// new node as root
			TreeNode *t = new TreeNode(i);
			t->left = tree;
			tmp.push_back(t);

			if (tree == nullptr) {
				break;
			}

			// new node as leafs
			TreeNode *root = clone(tree);
			TreeNode *p = root;

			while (p->right != nullptr) {
				TreeNode q(i);
				q.left = p->right;
				p->right = &q;
				tmp.push_back(clone(root));
				p->right = q.left;
				p = p->right;
			}

			p->right = new TreeNode(i);
			tmp.push_back(root);
		}

		trees = tmp;
	}

	return trees;
}

void UniqueBinarySearchTreesII::run() {
	vector<TreeNode *> trees = generateTrees(3);

	cout << trees.size() << endl;
}

static Leetcode *lc = new UniqueBinarySearchTreesII();
