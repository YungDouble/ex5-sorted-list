/**
* Programmer: Davos DeHoyos
 * Project number: 5
 * Project Desc: Implement and compare SortedList and SortedArray classes
 * Course: COSC 2436 PF III Data Structures
 * Date: 11/02/2024
 */

#include "SortedList.h"
#include "SortedArray.h"
#include <iostream>
#include <cassert>
#include <random>

// Helper function to generate random integers within a given range
int getRandomNumber(int min, int max) {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(min, max);
    return dis(gen);
}

// Helper function to generate a random array of values
void generateRandomValues(int* array, int size, int minValue, int maxValue) {
    for (int i = 0; i < size; ++i) {
        array[i] = getRandomNumber(minValue, maxValue);
    }
}

void runAutomatedTests() {
    // Generate random number of elements
    int numElements = getRandomNumber(5, 15);

    // Create random arrays for testing
    int randomValues[numElements];
    generateRandomValues(randomValues, numElements, 1, 100);

    // Test Case 1: Randomized Insertion and Comparison
    SortedList list1;
    SortedArray array1;

    for (int i = 0; i < numElements; ++i) {
        list1.insert(randomValues[i]);
        array1.insert(randomValues[i]);
    }

    std::cout << "Test Case 1 - List and Array comparison: "
    << (list1 == array1 ? "PASS" : "FAIL") << std::endl;

    // Generate another set of random values with one mismatched element
    generateRandomValues(randomValues, numElements, 1, 100);
    SortedList list2;
    SortedArray array2;
    for (int i = 0; i < numElements; ++i) {
        list2.insert(randomValues[i]);
        array2.insert(randomValues[i]);
    }
    // Introduce a mismatch
    array2.insert(getRandomNumber(1, 100));

    std::cout << "Test Case 2 - Randomized Mismatched Elements:\n";
    if (!(list2 == array2)) {
        std::cout << "PASS: List and Array are not equal (as expected).\n";
    } else {
        std::cout << "FAIL: List and Array are incorrectly reported as equal.\n";
    }

    // Test Case 3: Different Sizes (randomly generated)
    int numElements3 = getRandomNumber(5, 10);
    int extraElements3 = getRandomNumber(1, 5);

    int values3List[numElements3];
    int values3Array[numElements3 + extraElements3];

    generateRandomValues(values3List, numElements3, 1, 100);
    generateRandomValues(values3Array, numElements3 + extraElements3, 1, 100);

    SortedList list3;
    SortedArray array3;
    for (int val : values3List) {
        list3.insert(val);
    }
    for (int val : values3Array) {
        array3.insert(val);
    }

    std::cout << "Test Case 3 - Different Sizes (Randomized):\n";
    if (!(list3 == array3)) {
        std::cout << "PASS: List and Array are not equal due to size mismatch.\n";
    } else {
        std::cout << "FAIL: List and Array are incorrectly reported as equal.\n";
    }

    // Test Case 4: Identical Structures with Larger Random Input
    int numElements4 = getRandomNumber(10, 20);
    int values4[numElements4];
    generateRandomValues(values4, numElements4, 1, 100);

    SortedList list4;
    SortedArray array4;
    for (int val : values4) {
        list4.insert(val);
        array4.insert(val);
    }

    std::cout << "Test Case 4 - Identical Larger Structures (Randomized):\n";
    if (list4 == array4) {
        std::cout << "PASS: List and Array are equal.\n";
    } else {
        std::cout << "FAIL: List and Array are not equal.\n";
    }

    // Additional Edge Case: Empty Structures
    SortedList emptyList;
    SortedArray emptyArray;
    std::cout << "Test Case 5 - Empty Structures:\n";
    if (emptyList == emptyArray) {
        std::cout << "PASS: Empty List and Array are equal.\n";
    } else {
        std::cout << "FAIL: Empty List and Array are not equal.\n";
    }
}

int main() {
    std::cout << "Running Automated Tests...\n";
    runAutomatedTests();
    return 0;
}
