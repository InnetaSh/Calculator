#include "Tree.h"

void Tree::insert(Node*& nodePtr, Node*& newNode)
{
	if (nodePtr == nullptr)
		nodePtr = newNode;
	else if (newNode->num < nodePtr->num)
		insert(nodePtr->left, newNode);
	else
		insert(nodePtr->right, newNode);
}

void Tree::printL_R(Node* nodePtr)
{
	if (nodePtr != nullptr)
	{
		printL_R(nodePtr->left);
		cout << nodePtr->num << "\t";
		printL_R(nodePtr->right);
	}
}

bool Tree::FindNode(Node* nodePtr, int num)
{
	if (nodePtr == nullptr)
	{
		return false;
	}
	else if (num < nodePtr->num)
		return FindNode(nodePtr->left, num);

	else if (num > nodePtr->num)
		return FindNode(nodePtr->right, num);
	else
		return true;
	return false;
}

int Tree::FindMin(Node* nodePtr)
{
	if (nodePtr->left != nullptr)
		return FindMin(nodePtr->left);
	return nodePtr->num;
}
int Tree::FindMax(Node* nodePtr)
{
	if (nodePtr->right != nullptr)
		return FindMax(nodePtr->right);
	return nodePtr->num;
}

void Tree::deleteNode(int num, Node*& nodePtr)
{
	if (nodePtr && num < nodePtr->num)
		deleteNode(num, nodePtr->left);
	else if (nodePtr && num > nodePtr->num)
		deleteNode(num, nodePtr->right);
	else
		makeDeletion(nodePtr);
}

void Tree::makeDeletion(Node*& nodePtr)
{
	Node* tempNodePtr = nullptr;

	if (nodePtr == nullptr)
		cout << "Cannot delete empty node.\n";
	else if (nodePtr->right == nullptr)
	{
		tempNodePtr = nodePtr;
		nodePtr = nodePtr->left; // Reattach the left child. 
		delete tempNodePtr;
	}
	else if (nodePtr->left == nullptr)
	{
		tempNodePtr = nodePtr;
		nodePtr = nodePtr->right; // Reattach the right child.
		delete tempNodePtr;
	}
	// If the node has two children. 
	else
	{
		// Move one node to the right. 
		tempNodePtr = nodePtr->right;
		// Go to the end left node. 
		while (tempNodePtr->left)
			tempNodePtr = tempNodePtr->left;
		// Reattach the left subtree. 
		tempNodePtr->left = nodePtr->left;
		tempNodePtr = nodePtr;
		// Reattach the right subtree. 
		nodePtr = nodePtr->right;
		delete tempNodePtr;
	}

}

Tree::Tree()
{
	this->root = nullptr;
}

void Tree::insertNode(int val)
{
	Node* newNode = new Node;
	newNode->num = val;
	newNode->left = newNode->right = nullptr;
	insert(this->root, newNode);
}

void Tree::remove(int num)
{
	deleteNode(num, this->root);
}

void Tree::print()
{
	printL_R(this->root);
}

bool Tree::FindNum(int num)
{
	return FindNode(this->root, num);
}

int Tree::Min()
{
	if (this->root != nullptr)
		return FindMin(this->root);
	else
	{
		cout << "Tree free.\n";
		return -1;
	}
}

int Tree::Max()
{
	if (this->root != nullptr)
		return FindMax(this->root);
	else
	{
		cout << "Tree free.\n";
		return 0;
	}
}

