#ifndef SORTEDLIST_H
#define SORTEDLIST_H

#include <iostream>

class SortedArray;

class SortedList {
private:
    struct Node {
        int data;
        Node* next;
        Node(const int d) : data(d), next(nullptr) {}
    };  // end node
    Node* head;

public:
    SortedList();
    ~SortedList();

    void insert(const int value);
    void printList() const;
    int getValueAt(int index) const;
    bool operator==(const SortedArray& arr) const;

};  // end sortedList

#endif //SORTEDLIST_H
