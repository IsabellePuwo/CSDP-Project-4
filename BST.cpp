//
//  CSDP250 Project 4
//
//  Created by Isabelle Puwo on 11/4/23.
//

#include "BST.hpp"
#include <iostream>
#include<cstdlib>
using namespace std;

BST::TreeNode* BST::insert(TreeNode* root, int value) {
    if (root == nullptr) {
        return new TreeNode(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }

    return root;
}

void BST::preOrderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void BST:: inOrderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

void BST:: postOrderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

void BST:: generateRandomNumbers(int numNumbers) {
       for (int i = 0; i < numNumbers; i++) {
           int randomNumber = rand() % 100;

           NumberNode* newNode = new NumberNode(randomNumber);
           if (numberList == nullptr) {
               numberList = newNode;
               tail = newNode;
           } else {
               tail->next = newNode;
               tail = newNode;
           }

           root = insert(root, randomNumber);
       }
   }

void BST:: display()const{
    NumberNode* current = numberList;
     cout << "Original order of numbers: ";
     while (current != nullptr) {
         cout << current->data << " ";
         current = current->next;
     }
     cout <<endl;
}


