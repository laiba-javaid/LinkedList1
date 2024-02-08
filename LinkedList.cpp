#include "LinkedList.h"
#include "Node.h"
#include<iostream>
using namespace std;


LinkedList::LinkedList()
{
	first = 0;
	last = 0;
}
void LinkedList::insertAtEnd(int data1)
{
	Node* temp;
	temp = new Node;
	temp->data = data1;
	temp->next = 0;
	if (first == 0)
	{
		first = temp;
		last = temp;
	}
	else
	{
		last->next = temp;
		last = temp;
	}
	cout << "Data is inserted successfully!!" << endl;
}

void LinkedList::insertAtStart(int data1)
{
	Node* temp;
	temp = new Node;
	temp->data = data1;
	temp->next = 0;
	if (first == 0)
	{
		first = temp;
		last = temp;
	}
	else
	{
		temp->next = first;
		first = temp;

	}
	cout << "Data inserted successfully!!" << endl;
}

void LinkedList::insertBefore(int value)
{
	int value1;
	Node* temp = first;
	Node* prev = first;
	bool found = false;
	if (first == 0)
		cout << "List is empty!!" << endl;
	else
	{
		while (temp != 0 && found == false)
		{
			if (temp->data == value)
				found = true;
			prev = temp;
			temp = temp->next;
		}
		if (found == false)
			cout << "Value did'nt found in the list!!" << endl;
		else
		{
			cout << "Enter the value which you want to insert: " << endl;
			cin >> value1;
			if (temp == first)
				insertAtStart(value1);
			else
			{
				Node* temp1 = new Node;
				temp1->data = value1;
				temp1->next = 0;
				prev->next = temp1;
				temp1->next = temp;
				cout << "Value inserted successfully!!" << endl;
			}
			
		}
	}
}

void LinkedList::insertAfter(int value)
{
	int value1;
	Node* temp = first;
	bool found = false;
	if (first == 0)
		cout << "List is empty!!" << endl;
	else
	{
		while (temp != 0 && found == false)
		{
			if (temp->data == value)
				found = true;
			temp = temp->next;
		}
		if (found == false)
			cout << "Value did'nt found in the list!!" << endl;
		else
		{
			cout << "Enter the value which you want to insert: " << endl;
			cin >> value1;
			if (temp == last)
				insertAtEnd(value1);
			else
			{
				Node* temp1 = new Node;
				temp1->data = value1;
				temp1->next = 0;
				temp1->next = temp->next;
				temp->next = temp1;
				cout << "Value inserted successfully!!" << endl;
			}

		}
	}
}



void LinkedList::displayAllValues()
{
	Node* temp;
	if (first == 0)
		cout << "List is empty!!" << endl;
	else
	{
		temp = first;
		while (temp != 0)
		{
			cout << temp->data << endl;
			temp = temp->next;
		}
	}

}

unsigned int LinkedList::countNodes()
{
	unsigned int count = 0;
	Node* temp;
	if (first == 0)
		cout << "There is no data stored in the list!!" << endl;
	else
	{
		temp = first;
		while (temp != 0)
		{
			count++;
			temp = temp->next;
		}
	}
	return count;

}

void LinkedList::displayEvenValues()
{
	Node* temp;
	if (first == 0)
		cout << "List is empty!!" << endl;
	else
	{
		temp = first;
		while (temp != 0)
		{
			if (temp->data % 2 == 0)
				cout << temp->data << endl;
			temp = temp->next;
		}
	}


}

void LinkedList::deleteFirstNode()
{
	Node* temp = first;
	if (first == 0)
		cout << "List is empty!!" << endl;
	else
	{
		first = temp->next;
		delete temp;
		if (first == 0)
			last = 0;
	}
	cout << "Node deleted successfully!!" << endl;
}

void LinkedList::deleteLastNode()
{
	Node* temp = first;
	Node* prev=first;

	if (first == 0)
		cout << "List is empty!!" << endl;
	else if (first == last)
	{
		delete first;
		first = 0;
		last = 0;
		cout << "Node deleted successfully!!" << endl;
	}
	else
	{
		while (temp->next != 0)
		{
			prev = temp;
			temp = temp->next;		
		}
		delete temp;
		last = prev;
		last->next = 0;
		
		cout << "Node deleted successfully!!" << endl;
	}	

}

void LinkedList::deleteAnyNode(int value)
{
	Node* temp = first;
	Node* prev = first;
	bool found = false;
	if (first == 0)
		cout << "List is empty!!" << endl;
	else
	{
		
		while (temp != 0 && found == false)
		{
			if (temp->data == value)
				found = true;
			else
			{
				prev = temp;
				temp = temp->next;
			}
		}
		if (found == false)
			cout << "Value did'nt found in the list!!" << endl;
		else
		{
			if (temp == first)
				deleteFirstNode();
			else if (temp == last)
				deleteLastNode();
			else
			{
				prev->next = temp->next;
				delete temp;
			}
			cout << "Value deleted successfully!!" << endl;
		}
	}
}




bool LinkedList::findValue(int value)
{
	Node* temp = first;
	bool found = false;

	while (temp != 0 && found == false)
	{
		if (temp->data == value)
		{
			found = true;
			cout << "Value founded!!" << endl;
			return true;
		}
		temp = temp->next;
	}
	if (found == false)
	{
		cout << "Sorry!! entered value does'nt exist in the list" << endl;
		return false;
	}
}

int LinkedList::minimumValue()
{
	Node* temp = first;
	int min;
	if (first == 0)
		cout << "list is empty!!" << endl;
	else
		min = first->data;
	while (temp != 0)
	{
		if (temp->data < min)
			min = temp->data;
		temp = temp->next;
	}
	return min;
}

LinkedList::~LinkedList()
{
	Node* temp = first;
	while (temp != 0)
	{
		first = first->next;
		delete temp;
		temp = first;
	}
	last = 0;
	cout << "List is deleted successfully!!" << endl;
}