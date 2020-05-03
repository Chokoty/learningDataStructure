/* Binary tree. Level Order Traversal*/
#include <iostream>
#include <queue>
using namespace std;
struct Node{                  // make node struture
  char data;
  Node *left;
  Node *right;
};
void LevelOrder(Node *root){  // Level order algo
  if(root == NULL) return;    // exception
  queue<Node*> Q;             // use queue liblary
  Q.push(root);
  //while there is at least one discovered Node
  while(!Q.empty()){
    Node* current = Q.front();  //use current Node for travelsal
    cout << current->data <<" ";    // 1.
    if(current->left != NULL) Q.push(current->left);  // 2.
    if(current->right != NULL) Q.push(current->right);
    Q.pop(); //removing the element at front    // 3.
  }
}
int main(){

}
