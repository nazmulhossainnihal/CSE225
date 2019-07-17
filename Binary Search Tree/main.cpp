#include <iostream>
#include "bst.cpp"

using namespace std;

int main()
{
    BinarySearchTree myTree;
    int x;
    for(int i = 1; i <= 9; i++){
        cin >> x;
        myTree.insert(x);
    }


    myTree.print_inorder();
    cout << endl;
    myTree.print_preorder();
    cout << endl;
    myTree.print_postorder();
    cout << endl;
    cout << myTree.CountNode();
}
