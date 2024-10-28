#include "sortedList.cpp"
#include "sortedArray.cpp"
using namespace std;

int main() {
    SortedList sortedList;
    SortedArray sortedArray;
    
    // Question 1: Write a funcrion to comapre the 2 data structure
    int test_array[10]= {89,23,21,123,4,56,56,56,98,67};
    
    cout << "Sorted List: ";
    sortedList.printList();

    cout << "Sorted List: ";
    sortedArray.printArray();

    // Question 2:
    
    // Question 3:

    return 0;
}

void compareSortedStructures(const SortedList& sortedLust, const SortedArray& sortedArray, int size) {
    // Created pointer to iterate through the list and array
    SortedList::Node* listNode = sortedList.head;

    for (int i = 0; i < size; i++) {
        // Ensure that the list node is not null and index is within array size
        if (listNode == nullptr || i >= sortedArray.size) {
              std::cerr << "Warning: Mismatch is size between list and array." << std::endl;
              return;
        }

        if (listNode->data == sortedArray.array[i]) {
              std::cout << "Value at index " << i << ": " << listNode->data << std::endl;
        } else {
            std::cerr << "Warning: Mismatch at index " << i << " - List value: " << listNode->data
                      << ", Array Value: " << sortedArray.array[i] << std::endl;
            return;
        }
          listNode = listNode->next;
    }
}