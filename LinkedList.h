#pragma once
#include "Node.h"
#include<iostream>
using namespace std;

class LinkedList
{
		Node* first;
		Node* last;
	public:
		LinkedList();
		void insertAtEnd(int);
		void insertAtStart(int);
		void insertBefore(int);
		void insertAfter(int);
		void displayAllValues();
		unsigned int countNodes();
		void displayEvenValues();
		void deleteFirstNode();
		void deleteLastNode();
		void deleteAnyNode(int);
		bool findValue(int);
		int minimumValue();
		~LinkedList();
};

