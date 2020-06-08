#include<iostream>
#include<stdlib.h>
//#include <bits/stdc++.h> 
using namespace std; 

struct node 
{ 
	int data; 
	struct node* left; 
	struct node* right; 
}; 

struct node* newnode(int data) 
{ 
struct node* n = (struct node*)malloc(sizeof(struct node)); 
n->data = data; 
n->left = NULL; 
n->right = NULL; 

return(n); 
} 

struct node* insert(struct node* node, int data) 
{ 
if (node == NULL) 
	return(newNode(data)); 
else
{ 
	/* 2. Otherwise, recur down the tree */
	if (data <= node->data) 
		node->left = insert(node->left, data); 
	else
		node->right = insert(node->right, data); 

	/* return the (unchanged) node pointer */
	return node; 
} 
} 

int minValue(struct node* node) 
{ 
struct node* current = node; 

/* loop down to find the leftmost leaf */
while (current->left != NULL) 
{ 
	current = current->left; 
} 
return(current->data); 
} 

int main() 
{ 
struct node* r = NULL; 
r = insert(r, 4); 
insert(r, 2); 
insert(r, 1); 
insert(r, 3); 
insert(r, 6); 
insert(r, 5); 
cout << "Minimum value in Binery Search Tree: "<< minValue(root); 

return 0; 
} 


