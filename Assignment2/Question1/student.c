/*
 * Assignment 2 / Question 1 / student.c
 * ------------------------------------------------------------
 * Search in a Binary Search Tree (BST)
 *
 * Implement:
 *   struct TreeNode* bstSearch(struct TreeNode* root, int target);
 *
 * Rules:
 * - Return a pointer to the node with value == target, else NULL.
 * - Do NOT allocate new nodes.
 * - Do NOT modify the tree.
 * - Do NOT print anything.
 *
 * Build/Run (from Assignment2 folder):
 *   make run1
 */

#include <stdio.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode* bstSearch(struct TreeNode* root, int target) {
    while (root != NULL) {
        if (root->val == target) {
            return root;
        }
        else if (target < root->val) {
            root = root->left;
        }
        else {
            root = root->right;
        }
    }
    return NULL;
}
int main() {
    struct TreeNode n1 = {2, NULL, NULL};
    struct TreeNode n2 = {6, NULL, NULL};
    struct TreeNode n3 = {4, &n1, &n2};
    struct TreeNode n4 = {10, NULL, NULL};
    struct TreeNode root = {8, &n3, &n4};

    int target = 2;
    struct TreeNode* result = bstSearch(&root, target);

    if (result != NULL) {
        printf("Node is: %d\n", result->val);
    } else {
        printf("ERROR\n");
    }

    return 0;
}