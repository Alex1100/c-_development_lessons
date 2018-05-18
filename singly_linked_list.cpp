/* Still a work in progress */

#include <iostream>

using namespace std;

class node {
  public:
    int data;
    int next_node;

    int getData()
    {
      cout << endl << "DATA IS = " << data << "\nNEXT_NODE IS = " << next_node << endl;
      return data;
    };

    void printData()
    {
      cout << endl << "DATA IS = " << data << "\nNEXT_NODE IS = " << next_node << endl;
    };
    void assign(int _data)
    {
      data = _data;
      next_node = 0;
    };
};

class LinkedList {
  public:
    node head;

    void assign(node _head)
    {
      head = _head;
    };

    void printLL()
    {
      node current;
      current = head;

      while(current.next_node != 0)
      {
        current.printData();
        current = current.next_node;
      }
    };

    void add_node(node _next_node)
    {
      node current;
      if (head.next_node == 0)
      {
        node newNode;
        newNode.assign(_next_node)
        head.next_node = newNode;
      } else {
        current = head;

        while(current.next_node != 0)
        {
          current = current.next_node;
        }
        node newNode;
        newNode.assign(_next_node);
        current.next_node = newNode;
      }
    };
};


int main()
{
  node new_node;
  LinkedList ll;

  new_node.assign(1);
  cout << endl << new_node.getData() << "\n\n" << new_node.next_node << endl;

  ll.assign(new_node);
  // ll.printLL();
  // ll.add_node(new_node);
  // ll.printLL();
  return 0;
}
