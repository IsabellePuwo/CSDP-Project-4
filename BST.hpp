//
//  BST.hpp
//  CSDP250 Project 4
//
//  Created by Isabelle Puwo on 11/4/23.
//

#ifndef BST_hpp
#define BST_hpp

#include <stdio.h>
using namespace std;

class BST{
private:
    struct TreeNode {
        int data;
        TreeNode* left;
        TreeNode* right;

        TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
    };
    struct NumberNode {
           int data;
           NumberNode* next;
           NumberNode(int value) : data(value), next(nullptr) {}
       };
    NumberNode* numberList;
    NumberNode* tail;
    TreeNode* root;
    
public:
    BST() : root(nullptr), numberList(nullptr), tail(nullptr) {}
    TreeNode* insert(TreeNode*, int);
    void preOrderTraversal(TreeNode*);
    void inOrderTraversal(TreeNode*);
    void postOrderTraversal(TreeNode*);
    void generateRandomNumbers(int);
    void display()const;
    TreeNode* getRoot() const {
    return root;
        }

    
    
    
};
#endif /* BST_hpp */
