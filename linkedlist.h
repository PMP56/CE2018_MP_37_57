#include <iostream>
#include <string>

class Node{
public:
  std::string info;
  Node* next;
};

class STACKS{
private:
    Node* top_ele;

public:
  STACKS();
  ~STACKS();

  //insertion
  bool isEmpty(Node* top_ele);
  bool isFull(Node* top_ele);
  Node* push(Node* top_ele, std::string data);
  Node* pop(Node* top_ele);
  void top(Node* top_ele);

  void display(Node* top_ele);

};
