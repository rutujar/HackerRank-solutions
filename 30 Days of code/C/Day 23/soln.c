#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node {
    struct Node* left;
    struct Node* right;
    int data;
}Node;

Node* newNode(int data ) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->left = node->right = NULL;
    node->data = data;
    return node;
}

int getHeight(Node* root) {
    //Write your code here
    if(root == NULL) return -1;   

    int left = 1 + getHeight(root->left);
    int right = 1 + getHeight(root->right);
  
    if(left > right) return left;
    else return right;
}

/* Print nodes at a given level */
void printGivenLevel(Node* root, int level)
{
    if(root == NULL)
        return;
    if(level == 1)
        printf("%d ", root->data);
    else if(level > 1) {
        printGivenLevel(root->left, level - 1);
        printGivenLevel(root->right, level - 1);
    }
}

void levelOrder(Node* root) {
    /* Prints each level, i, of the tree*/
    for(int i = 1; i <= getHeight(root) + 1; i++) {
         printGivenLevel(root, i);
    }
}

Node* insert(Node* root,int data){
    if(root == NULL)
        return newNode(data);
    else {
        Node* cur;
        if(data <= root->data) {
            cur = insert(root->left, data);
            root->left = cur;                
        }
        else {
            cur = insert(root->right, data);
            root->right = cur;
        }
        
    }
    return root;
}
int main() {
    Node* root = NULL;
    int T, data;
    scanf("%d", &T);
    while(T-->0) {
        scanf("%d", &data);
        root = insert(root,data);
    }
    levelOrder(root);
    return 0;
    
}
