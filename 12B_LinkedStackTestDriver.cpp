#include <iostream>
#include <string>
#include "LinkedStack.h"
using namespace std;

int main() {
  LinkedStack stack;  // stack of 20 strings
  cout << "Corey Moag, CIS 127.2490, Assignment 12.2 LinkedStack Program" << endl;
  // Use intStack
  stack.push("a");
  stack.push("b");
  stack.push("c");
  stack.push("d");
  cout << "d? " << stack.peek() << endl;
  cout << "d? " << stack.pop() << endl;
  cout << "c? " << stack.peek() << endl;

  cout << "isEmpty 0? " << stack.isEmpty() << endl;
  cout << "c b a? ";
  while(! stack.isEmpty()) {
    cout << stack.pop() << " ";
  }
  cout << endl;
  cout << "isEmpty 1? " << stack.isEmpty() << endl;

  system("pause");
  return 0;
}


