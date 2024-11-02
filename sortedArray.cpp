#include "SortedArray.h"

SortedArray::SortedArray() {}

bool SortedArray::insert(const int value) {
    auto pos = std::lower_bound(arr.begin(), arr.end(), value);
    arr.insert(pos, value);
    return true;
}

void SortedArray::printArray() const {
    for (const int& value : arr) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
}

int SortedArray::getSize() const {
      return arr.size();
}

int SortedArray::getValueAt(const int index) const {
    return (index >= 0 && index < arr.size()) ? arr[index] : -1;
}
