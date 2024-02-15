#include "sortedList.cpp"
#include "sortedArray.cpp"
using namespace std;

int main() {
    SortedList sortedList;
    SortedArray sortedArray;
    
    // Test 1
    int test_array[10]= {89,23,21,123,4,56,56,56,98,67};
    for (int i =0; i<sizeof(test_array) / sizeof(test_array[0]); ++i){
       sortedList.insert(test_array[i]);
       sortedArray.insert(test_array[i]);
    }
    cout << "Sorted List: ";
    sortedList.printList();

    cout << "Sorted List: ";
    sortedArray.printArray();

    // Test 2
    /*
    How can I use a for loop to validate each member is equals
    To ilustrate, I use the psedocode:
        I want to achieve this:
        for index in range size the test array
            if sortList[index] == sortArray[index]
                do nothing or display the value
            else
                break the loop and/or throw a warning 
    Guidance:
    + There is several way
    + One of them is to create a function in each class that will return a value at the according index 
        then compare them one by one.
    + Another one is either have a function that convert the sortedList into a 
        Sorted Array and compare them (or the other way arround) 
    + Another method is also using overload operator (Also require a convert) 
    + Note Each of the methods given required other helper-functions: 
        FEEL FREE TO WRITE AS MUCH CODE AS YOU WANT

    */
   // Test 3: Optional / No code, answer only
   /*
        Questions: How can we make the sorted array more flexible (have more than 20 members)
   */
    return 0;
}