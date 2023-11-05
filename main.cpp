
//  CSDP250 Project 4
//
//  Created by Isabelle Puwo on 11/4/23.
//

#include <iostream>
#include "BST.hpp"
using namespace std;
int main(){
    BST tree;
    int numNumbers = 35;
    
    tree.generateRandomNumbers(numNumbers);
    tree.display();
    
    cout<< "Preorder traversal: ";
    tree.preOrderTraversal(tree.getRoot());
    cout<< endl;
    
    cout << "Inorder traversal: ";
    tree.inOrderTraversal(tree.getRoot());
    cout << endl;

    cout << "Postorder traversal: ";
    tree.postOrderTraversal(tree.getRoot());
    cout << endl;

    return 0;

    
}

