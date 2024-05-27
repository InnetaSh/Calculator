#pragma once
#include<iostream>
using namespace std;
template<typename T>
class Queue
{
	struct Node
	{
		T num;
		int priority;
		Node* next;
	};
	Node* head;
	Node* tail;
	
public:
	Queue();
	bool isEmpty();
	void push(T, int);
	T pop();
	void show() const;
	~Queue();
};

template<typename T>
inline Queue<T>::Queue()
{
	this->head = nullptr;
	this->tail = nullptr;
}



template<typename T>
inline bool Queue<T>::isEmpty()
{
	return this->head == nullptr;
}


template<typename T>
inline void Queue<T>::push(T val, int priority)
{
	Node* newNode = new Node;
	newNode->num = val;
	newNode->priority = priority;
	newNode->next = nullptr;
	if (isEmpty())
		this->head = this->tail = newNode;
	else if(head && newNode->priority > this->head->priority)
	{
		Node* nodePtr = this->head;
		this->head = newNode;
		newNode->next = nodePtr;
	}
	else
	{
		Node* nextNode = this->head;
		Node* previusNode = nullptr;
		while (nextNode && priority <=nextNode->priority)
		{
			previusNode = nextNode;
			nextNode = nextNode ->next;

		}
		if (previusNode == nullptr)
		{
			this->tail->next = newNode;
			this->tail = newNode;
		}
		else
		{
			previusNode->next = newNode;
			newNode->next = nextNode;
		}
	}
}

template<typename T>
inline T Queue<T>::pop()
{
	if (isEmpty())
	{
		cout << "Queue is empty.\n";
		exit(1);
	}
	Node* nodePtr = this->head;
	T num = nodePtr->num;
	this->head = this->head->next;
	if (!this->head)
	{
		this->head = this->tail = nullptr;
	}
	delete nodePtr;
	return num;
}


template<typename T>
inline void Queue<T>::show() const
{
	Node* nodePtr = head;
	while (nodePtr) {
		cout << "(" << nodePtr->num << ", " << nodePtr->priority << ") \t";
		nodePtr = nodePtr->next;
	}
	cout << "\n";
}
template<typename T>
inline Queue<T>::~Queue()
{
	while (!isEmpty())
		pop();
}



