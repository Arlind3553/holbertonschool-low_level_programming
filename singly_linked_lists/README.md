#  Singly linked lists
## Introduction
A singly linked list is a fundamental data structure that consists of a sequence of nodes. Each node in the list contains two parts: data and a reference (or pointer) to the next node in the sequence. This simple yet powerful data structure enables efficient insertions, deletions, and traversals. This README will provide an overview of some essential functions to work with singly linked lists in C/C++.
### Functions Provided
1. [Function that prints all the elements of a list](https://github.com/arlind3553/holbertonschool-low_level_programming/blob/main/singly_linked_lists/0-print_list.c)
Function Signature:
c
```
size_t print_list(const list_t *h);
```
Description:
This function is used to print all the elements of a singly linked list starting from the head node and moving towards the end of the list. It iterates through the list, printing the data in each node, until it reaches the end.
2. [Function that returns the number of elements in a list](https://github.com/arlind3553/holbertonschool-low_level_programming/blob/main/singly_linked_lists/1-list_len.c)
Function Signature:
c
```
size_t list_len(const list_t *h);
```
Description:
The countElements function calculates and returns the total number of nodes in the singly linked list. It iterates through the entire list, incrementing a counter for each node encountered until it reaches the end.
3. [Function that adds a new node at the beginning of a list](https://github.com/arlind3553/holbertonschool-low_level_programming/blob/main/singly_linked_lists/2-add_node.c)
Function Signature:
c
```
list_t *add_node(list_t **head, const char *str);
```
Description:
This pushFront function is used to insert a new node at the beginning of the singly linked list. It takes a pointer to the head pointer (to update the head) and the data for the new node. The function creates a new node, sets its data, and makes it point to the current head. Finally, it updates the head pointer to point to the new node.
4. [Function that adds a new node at the end of a list](https://github.com/arlind3553/holbertonschool-low_level_programming/blob/main/singly_linked_lists/3-add_node_end.c)
Function Signature:
c
```
list_t *add_node_end(list_t **head, const char *str)
```
Description:
The pushBack function is used to append a new node at the end of the singly linked list. It takes a pointer to the head pointer (to update the head if the list is empty) and the data for the new node. The function creates a new node, sets its data, and appends it to the end of the list by updating the next pointer of the last node to point to the new node.
5. [Function that frees a list](https://github.com/arlind3553/holbertonschool-low_level_programming/blob/main/singly_linked_lists/4-free_list.c)
Function Signature:
c
```
void free_list(list_t *head)
```
Description:
The freeList function is used to deallocate the memory used by all the nodes in the singly linked list. It takes a pointer to the head pointer (to update the head to NULL after freeing all nodes) and traverses the list. For each node, it frees the memory occupied by the node and then updates the pointer to the next node.
## Conclusion
Singly linked lists are a powerful data structure that can be used for various applications, and the provided functions can help you manipulate and manage these lists efficiently. By utilizing these functions, you can easily perform tasks like printing the elements, finding the number of elements, adding nodes to the beginning or end, and freeing the memory of the entire list. Enjoy working with singly linked lists in your C/C++ programs!
