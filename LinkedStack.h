#ifndef LINKEDSTACK_H_
#define LINKEDSTACK_H_

#include <iostream>  // For NULL

/**
 * This file contains two types:
 *
 *   1) struct node to hold an element and a link to another node.
 *   2) class StringStack to hold elemnts of a stack
 */
struct node {
//--constructors
  node() {
    next = nullptr;
  }

  node(std::string element) {
    data = element;
    next = nullptr;
  }

  // Two public data members
  std::string data;
  node* next;
};

// Build a collection

class LinkedStack {

private:
  node* top;
  node* temp;
public:
//--constructor
	// set the top pointer to a nullptr
  LinkedStack() 
  {
	  top = nullptr;
  }
  // return the bool value of top equivalent to NULL
  bool isEmpty() 
  {
	  return top == NULL;
  }

  // if top is equivalent to a nullptr, then top equals a new node holding the element
  // otherwise the create a temp node pointer and assign it top
  // assign top a new node holding the element
  // top pointing to next is assigned the temp pointer
 void push(const std::string element) 
  {
	  if (top == nullptr)
	  {
		  top = new node(element);
	  }
	  else
	  {
		  temp = top;
		  top->next;
	  }
  }

  // return top pointing to data
  std::string peek() 
  {
	  return top->data;
  }

  // create a temp string and assign it top pointing to data
  // then assign top the top pointing to next
  // return the temp string
  std::string pop() 
  {
	  std::string temp;
	  temp
	  //top = top->next;
	  return temp
  }

};

#endif /* LINKEDSTACK_H_ */
