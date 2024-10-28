#include <iostream>

class SortedList {
private:
    struct Node {
        int data;
        Node* next;
        Node(const int d) : data(d), next(nullptr) {}
    };
    Node* head;

public:
    SortedList() : head(nullptr) {}

    ~SortedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }

    void insert(int value) {
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

    void printList() const {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    int getValueAt(int index) const {
        Node* current = head;
        int count = 0;
        while (current != nullptr && count < index) {
            current = current->next;
            count++;
        }
        return (current != nullptr) ? current->data : -1;
    }

    bool operator==(const SortedArray& arr) const {
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
        // Ensure that the array does not have extra elements beyond the list's lenght
        return index == arr.getSize();
    }

};
