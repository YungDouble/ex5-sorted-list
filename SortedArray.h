#ifndef SORTEDARRAY_H
#define SORTEDARRAY_H

#include <iostream>
#include <vector>
#include <algorithm>

class SortedArray {
    private:
        std::vector<int> arr;

    public:
        SortedArray();
        bool insert(const int value);
        void printArray() const;
        int getSize() const;
        int getValueAt(int index) const;
};

#endif //SORTEDARRAY_H
