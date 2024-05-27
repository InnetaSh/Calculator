#pragma once
#include<iostream>
using namespace std;
class Tree
{
	struct Node
	{
		int num;
		Node* left;
		Node* right;
	};
	Node* root;
	void insert(Node*&, Node*&);
	void printL_R(Node*);
	bool FindNode(Node* ,int);
	int FindMin(Node*);
	int FindMax(Node*);
	void deleteNode(int, Node*&);
	void makeDeletion(Node*&);
public:
	Tree();
	void insertNode(int);
	void remove(int);
	void print();
	bool FindNum(int);
	int Min();
	int Max();


};
