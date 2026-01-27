## Data Structures

### Big O
- What is good code?
    - Readable
    - Scalable
    - BigO measure the code scalability
    - BigO notation tell how long the program take to run the algorithm or code
    - We calculate how many steps take perform the function
- How we calculate BigO
    - Count every steps(assignment, calculations, loops,etc)
    - loop is consider as the O(n)
    - Inside the lopp item will execute how many times the loop iterate. So it will be O(n)
- **BigO(n)**
    - Linear Time Complexity
    - If the number of item increases number of operations increases
    - Linear- for loops, while loops through n items

- **BigO(1)**
    - Big O Notattion: O(1) - Constant Time Complexity
    - If input size increase no changes happend
    - Constant- no loops

- **O(log N) Logarithmic**
    - usually searching algorithms have log n if they are sorted (Binary Search)
- **O(n log(n))** 
    - Log Liniear- usually sorting operations
- **O(n^2)** 
    - Quadratic- every element in a collection needs to be compared to ever other element. Two nested loops
    - Exponential- recursive algorithms that solves a problem of size N
- **O(n!)**
    -  Factorial- you are adding a loop for every element
- Iterating through half a collection is still O(n)
- Two separate collections: O(a * b)

- **What can cause time in a function?**
    - Operations (+, -, *, /)
    - Comparisons (<, >, ==)
    - Looping (for, while)
    - Outside Function call (function())

- **Rules to calculate BigO**
    - Worst Case
    - Remove Constants
    - Different inputs should have different variables. O(a+b). A and B arrays nested would be O(a*b)
    - + for steps in order
    - * for nested steps
    - Drop Non-dominant terms

- [Reference Code](../JavaScript/bigO)