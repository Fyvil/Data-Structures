#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <vector>

struct Node {
  int val;
  Node *next;
  Node(int x) : val{x}, next{nullptr} {}
  ~Node() = default;
};

class LinkedList {
private:
  Node *head;
  Node *tail;
  int len;

public:
  LinkedList();
  LinkedList(int x);
  LinkedList(const int *arr, int arr_len);
  LinkedList(const std::vector<int> &vec);
  LinkedList(const LinkedList &ll);
  ~LinkedList();

  void print() const;
  void details() const;
  int size() const { return len; }

  void prepend(int x);
  void prepend(const int *arr, const int &arr_len);
  void prepend(const std::vector<int> &vec);
  void append(int x);
  void append(const int *arr, int arr_len);
  void append(const std::vector<int> &vec);
  void insert(int index, int x);
  void insert(int index, const int *arr, const int &arr_len);
  void insert(int index, const std::vector<int> &vec);

  void deleteFirst();
  void deleteLast();
  void deleteByIndex(int index);
  void deleteByValue(int x);

  void slice(int start, int end);
  void makeEmpty();
};

#endif // !LINKEDLIST_H
