# Sorted List and Sorted Array

## Instruction

### Question 1: 
**Understanding Validation Between Sorted List and Sorted Array**
- Write a function that compares the elements at each index between `SortedList` and `SortedArray`. If the elements match, continue the loop and print the values; if they don't match, break the loop and display a warning. 
  - What is the best approach to implement this validation, and why?
  - Example Pseudocode:  
    ```cpp
    for index in range (size of test_array):
        if sortedList.getValueAt(index) == sortedArray.getValueAt(index):
            print(value)
        else:
            break and throw warning
    ```

### Question 2: 
**Flexibility in Data Structures**
- In **Test 32**, how can we make the `SortedArray` more flexible to handle a dynamic number of elements (e.g., beyond 20 members)? 
  - What are some possible strategies to achieve this in C++?
  - Consider using dynamic arrays, vectors, or another approach to extend the size limitation of the current `SortedArray`.

### Question 3: 
**Design Improvement in Data Structure Comparisons**
- As hinted in **Question 2**, describe different methods to compare `SortedList` and `SortedArray` more efficiently:
  - Option 1: Write helper functions in each class that return values at specific indices, comparing them one by one.
  - Option 2: Create a function to convert a `SortedList` into a `SortedArray` (or vice versa) and then compare the arrays directly.
  - Option 3: Use operator overloading to compare the two data structures.
  - Which method would be most efficient in terms of time complexity, and why?

## Requirements:
The driver program for each programming project should begin with "header comments" containing:
```cplus
/**
Your name
Programming assignment number
A short description of the program
Course
The date
*/

/**
For example:
Programmer: TRUC HUYNH
Project number: 2
Project Desc: Quadratic Expression class
Course: COSC 2436 PF III Data Structures
Date:   01/12/2024
*/
```
**note:**
- Use a standard indentation convention in your code (see examples in textbook).
- Use meaningful variable names.
- **Do not use global variables.**
- **Your class methods should not contain any input or output operations. All input and output should be done in your driver.**

### Submission:
Project will automatically clone to your github account. Please clone to your work space and work on it. Make sure you push regularly to create good habit. Your code will automatically submit to my board when you push. I will grade by due date. Score will be release by end of semester.
