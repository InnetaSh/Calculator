#pragma once
#include<iostream>
using namespace std;
template<typename T>
class List
{
	struct Node
	{
		T num;
		Node* next;
	};
	Node* head;
public:
	List();
	~List();
	void appenNode(T);
	void printList();
	void deleteNode(T);
	void deleteFirst();
	void insertNode(T);
};

template<typename T>
List<T>::List()
{
	this->head = nullptr;
}

template<typename T>
List<T>::~List()
{
	Node* nodePtr = head;
	Node* nextNode;
	while (nodePtr != nullptr)
	{
		nextNode = nodePtr->next;
		delete nodePtr;
		nodePtr = nextNode;
	}
}
template<typename T>
void List<T>::appenNode(T val)
{
	Node* newNode;
	newNode = new Node();
	newNode->num = val;
	newNode->next = nullptr;

	if (head == nullptr)
	{
		head = newNode;
	}
	else
	{
		Node* nodePtr = head;
		while (nodePtr->next != nullptr)
		{
			nodePtr = nodePtr->next;
		}
		nodePtr->next = newNode;
	}
}

template<typename T>
void List<T>::printList()
{
	Node* nodePtr = head;
	while (nodePtr != nullptr)
	{
		cout << nodePtr->num << "\t";
		nodePtr = nodePtr->next;
	}
	cout << "\n";
}

template<typename T>
void List<T>::deleteNode(T val)
{
	Node* nodePtr;
	Node* previusNode = nullptr;
	if (head == nullptr)
		return;
	if (head->num == val)
	{
		nodePtr = head->next;
		delete head;
		head = nodePtr;
	}
	else
	{
		nodePtr = head;
		while (nodePtr != nullptr && nodePtr->num != val)
		{
			previusNode = nodePtr;
			nodePtr = nodePtr->next;
		}
		if (nodePtr != nullptr)
		{
			previusNode->next = nodePtr->next;
			delete nodePtr;
		}
		else
			cout << "Takogo elementa nema.\n";
	}
}

template<typename T>
inline void List<T>::deleteFirst()
{
	if (head == nullptr)
		return;
	Node* nodePtr;
	nodePtr = head->next;
	delete head;
	head = nodePtr;
}

template<typename T>
void List<T>::insertNode(T val)
{
	Node* nodePtr;
	Node* newNode;
	Node* previusNode;

	newNode = new Node;
	newNode->num = val;
	newNode->next = nullptr;

	if (head == nullptr)
		head = newNode;
	else
	{
		nodePtr = head;
		previusNode = nullptr;
		while (nodePtr != nullptr && nodePtr->num < val)
		{
			previusNode = nodePtr;
			nodePtr = nodePtr->next;
		}
		if (previusNode == nullptr)
		{
			head = newNode;
			newNode->next = nodePtr;
		}
		else
		{
			previusNode->next = newNode;
			newNode->next = nodePtr;
		}
	}
}


