#include "SortedList.h"
#include "SortedArray.h"

SortedList::SortedList() : head(nullptr) {}

SortedList::~SortedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

void SortedList::insert(int value) {
    Node* newNode = new Node(value);
    if (head == nullptr || head->data >= value) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr && current->next->data < value) {
                current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

void SortedList::printList() const {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
}

int SortedList::getValueAt(int index) const {
    Node* current = head;
    int count = 0;
    while (current != nullptr && count < index) {
        current = current->next;
        count++;
    }
    return (current != nullptr) ? current->data : -1;
}

bool SortedList::operator==(const SortedArray& arr) const {
    Node* current = head;
    int index = 0;

    // Iterate through the list and compare with the array elements
    while (current != nullptr) {
        if (index >= arr.getSize() || current->data != arr.getValueAt(index)) {
            return false;
        }
        current = current->next;
        ++index;
    }
    // Ensure that the array does not have extra elements beyond the list's length
    return index == arr.getSize();
}

