##**Linked List Implementation in C++:**

This repository contains a C++ implementation of a linked list data structure along with several common operations. Linked lists are dynamic data structures that consist of a sequence of elements where each element points to the next one, forming a chain-like structure.

##**Files Included:**

Node.h: Header file containing the class definition for the Node class, which represents individual elements of the linked list.
Node.cpp: Source file containing the implementation of the constructor for the Node class.
LinkedList.h: Header file containing the class definition and function prototypes for the linked list implementation.
LinkedList.cpp: Source file containing the implementation of the functions declared in LinkedList.h.
Use LinkedListmain.cpp to test and demonstrate the functionality of the linked list implementation.

##**Functions Included:**

LinkedList(): Constructor to initialize the linked list.
insertAtEnd(int): Inserts a new node with the given value at the end of the linked list.
insertAtStart(int): Inserts a new node with the given value at the beginning of the linked list.
insertBefore(int): Inserts a new node with the given value before the specified value in the linked list.
insertAfter(int): Inserts a new node with the given value after the specified value in the linked list.
displayAllValues(): Displays all the values stored in the linked list.
countNodes(): Returns the number of nodes present in the linked list.
displayEvenValues(): Displays all the even-valued nodes in the linked list.
deleteFirstNode(): Deletes the first node from the linked list.
deleteLastNode(): Deletes the last node from the linked list.
deleteAnyNode(int): Deletes the node containing the specified value from the linked list.
findValue(int): Checks if a specific value is present in the linked list.
minimumValue(): Returns the minimum value stored in the linked list.
~LinkedList(): Destructor to deallocate memory used by the linked list.

##**How to Use:**

Clone the repository to your local machine.
Include the necessary header files (LinkedList.h and Node.h) in your C++ program.
Implement the functions defined in LinkedList.cpp and Node.cpp according to your requirements.
Use LinkedListmain.cpp to test and demonstrate the functionality of the linked list implementation.

Feel free to explore and modify the implementation to suit your needs. If you encounter any issues or have suggestions for improvements, please don't hesitate to open an issue or create a pull request. Contributions are welcome!
