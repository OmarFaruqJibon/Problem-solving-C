typedef struct lNode
{
	char data[40];
	struct lNode *leftChild;
	struct lNode *rightChild;
} lNode;

#include <stdio.h>
#include <stdlib.h>

lNode * createTree(char name[40])
{
	lNode *node;
	node = (lNode*) malloc(sizeof(lNode));
	node->leftChild=NULL;
	node->rightChild=NULL;
	strcpy(node->data, name);
	return node;
}

int size(lNode  *root)
{
	int count = 1;
	if (root == NULL)
		return 0;
	else {
		count += size(root->leftChild);
		count += size(root->rightChild);
		return count;
	}
}

void main() {
	lNode* tree;
	int count;
	tree = createTree("Person 1");
	tree->leftChild=createTree("Person 2");
	tree->rightChild=createTree("Person 3");
	tree->leftChild->leftChild=createTree("Person 4");
	tree->rightChild->rightChild=createTree("Person 5");
	count = size(tree);
	printf("Number of members %d", count);
}
