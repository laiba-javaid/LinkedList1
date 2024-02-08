#include "Node.h"
#include "LinkedList.h"
#include<iostream>
using namespace std;

int main()
{
	LinkedList list;
	unsigned int choice;
	char choice1;
	cout << "1. Insert Node at End" << endl;
	cout << "2. Insert Node at Start" << endl;
	cout << "3. Insert Before any Node" << endl;
	cout << "4. Insert After any Node" << endl;
	cout << "5. Display all Values" << endl;
	cout << "6. Count Nodes" << endl;
	cout << "7. Display Even Values" << endl;
	cout << "8. Delete First Node" << endl;
	cout << "9. Delete Last Node" << endl;
	cout << "10. Delete Any Node" << endl;
	cout << "11. Delete All List" << endl;
	cout << "12. Find any Value" << endl;
	cout << "13. Get Minimun Value" << endl;
	cout << "14. Exit" << endl;

	do
	{
		cout << "Enter your choice: " << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			int value;
			cout << "Enter the value which you want to insert: " << endl;
			cin >> value;
			list.insertAtEnd(value);
			break;
		case 2:
			int value1;
			cout << "Enter the value which you want to insert" << endl;
			cin >> value1;
			list.insertAtStart(value1);
			break;
		case 3:
			int value3;
			cout << "Enter the value before which you want to insert node: " << endl;
			cin >> value3;
			list.insertBefore(value3);
			break;
		case 4:
			int value2;
			cout << "Enter the value before which you want to insert node: " << endl;
			cin >> value2;
			list.insertAfter(value2);
			break;
		case 5:
			list.displayAllValues();
			break;
		case 6:
			cout << "Total nodes in the list" << endl;
			cout << list.countNodes() << endl;;
			break;
		case 7:
			list.displayEvenValues();
			break;
		case 8:
			list.deleteFirstNode();
			break;
		case 9:
			list.deleteLastNode();
			break;
		case 10:
			int value4;
			cout << "Enter the value which you want to delete: " << endl;
			cin >> value4;
			list.deleteAnyNode(value4);
			break;
		case 11:
			list.~LinkedList();
			break;
		case 12:
			int value5;
			cout << "Enter the value which you want to find:" << endl;
			cin >> value5;
			list.findValue(value5);
			break;
		case 13:
			list.minimumValue();
			break;
		case 14:
			exit(0);
			break;
		default:
			cout << "Invalid choice!!" << endl;

		}
		cout << "Do you again want to enter any choice?" << endl;
		cin >> choice1;

	}while (choice1 == 'y');

	cout << "Program terminated" << endl;




	return 0;

}