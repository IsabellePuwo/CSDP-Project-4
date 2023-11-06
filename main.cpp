
//  CSDP250 Project 4
//
//  Created by Isabelle Puwo on 11/4/23.
//

#include <iostream>
#include "BST.hpp"
using namespace std;
int main() {
    BST tree;
    const int numNumbers = 35;

    tree.generateRandomNumbers(numNumbers);
    tree.display();

    int choice;

    cout << "\nWelcome :)\n";
    cout << "1. Preorder Traversal\n";
    cout << "2. Inorder Traversal\n";
    cout << "3. Postorder traversal\n";
    cout << "4. Exit program\n";
    
    do {
        cout << "Please choose traversal type: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Preorder traversal: ";
                tree.preOrderTraversal(tree.getRoot());
                cout << endl;
                break;
            case 2:
                cout << "Inorder traversal: ";
                tree.inOrderTraversal(tree.getRoot());
                cout << endl;
                break;
            case 3:
                cout << "Postorder traversal: ";
                tree.postOrderTraversal(tree.getRoot());
                cout << endl;
                break;
            case 4:
                cout << "Exiting program...." << endl;
                break;
            default:
                cout << "Invalid choice. Please choose 1, 2, 3, or 4 for traversal type." << endl;
                break;
        }
    } while (choice != 4);

    return 0;
}

