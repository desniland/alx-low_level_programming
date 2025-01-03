# Search Algorithms

- Implementation of various types of search algorithms and stated the corresponding space/time
complexities for each.

# Learning Objectives
- At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

# General
- What is a search algorithm
- What is a linear search
- What is a binary search
- What is the best search algorithm to use depending on your needs

 # Requirements
# General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory
 - Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- You are only allowed to use the printf function of the standard library. Any call to another function like strdup, malloc, … is forbidden.
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called search_algos.h
- Don’t forget to push your header file
- All your header files should be include guarded

Data Structures
```
/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;
```

Function Prototypes

| File                    | Prototype                                                       |
| ----------------------- | --------------------------------------------------------------- |
| `0-linear.c`            | `int linear_search(int *array, size_t size, int value);`        |
| `1-binary.c`            | `int binary_search(int *array, size_t size, int value);`        |
| `100-jump.c`            | `int jump_search(int *array, size_t size, int value);`          |
| `102-interpolation.c`   | `int interpolation_search(int *array, size_t size, int value);` |
| `103-exponential.c`     | `int exponential_search(int *array, size_t size, int value);`   |
| `104-advanced_binary.c` | `int advanced_binary(int *array, size_t size, int value);`      |

## Tasks

## 0. Linear search
  * [0-linear.c](./0-linear.c): C function that searches for a value in an array
  of integers using linear search.
  * If the value is not present or the array is `NULL`, returns `-1`.
	* Otherwise, returns the first index where `value` is located.

## 1. Binary search
  * [1-binary.c](./1-binary.c): C function that searches for a value in a sorted
  array of integers using binary search.
  * Assumes the array is sorted in ascending order and that the value to search
  for is not repeated in the array.
  * If the value is not present or the array is `NULL`, returns `-1`.
	* Otherwise, returns the index where `value` is located.

## 2. Big O
  * [2-O](./2-O): Text file containing the worst case time complexity of linear
  search.

## 3. Big O
  * [3-O](./3-O): Text file containing the worst case space complexity of
  iterative linear search.

## 4. Big O
  * [4-O](./4-O): Text file containing worst case case time complexity
  of binary search.

## 5. Big O
  * [5-O](./5-O): Text file containing the worst case space complexity
  of binary search.

##6. Big O
  * [6-O](./6-O): Text file containing the space complexity of the following algorithm:
```
int **allocate_map(int n, int m)
{
    int **map;

    map = malloc(sizeof(int *) * n);
    for (size_t i = 0; i < n; i++)
    {
        map[i] = malloc(sizeof(int) * m);
		}
		return (map);
}
```

## 7. Jump search
  * [100-jump.c](./100-jump.c): C function that searches for a value in a
  sorted array of integers using jump search.
  * Uses the square root of the size of the array as the jump step.
  * Assumes the array is sorted in ascending order and that the value to search
  for is not repeated in the array.
  * If the value is not present or the array is `NULL`, returns `-1`.
	* Otherwise, returns the index where `value` is located.

## 8. Big O
  * [101-O](./101-O): Text file containing the average case time complexity of
  jump search in an array of size `n` using `step = sqrt(n)`.

## 9. Interpolation search
  * [102-interpolation.c](./102-interpolation.c): C function that searches for
  a value in a sorted array of integers using interpolation search.
  * Assumes the array is sorted in ascending order.
  * If the value is not present or the array is `NULL`, returns `-1`.
	* Otherwise, returns the first index where `value` is located.

## 10. Exponential search
  * [103-exponential.c](./103-exponential.c): C function that searches for a
  value in a sorted array of integers using exponential search.
  * Uses powers of 2 as exponential ranges to search the array.
  * Assumes the array is sorted in ascending order.
  * If the value is not present or the array is `NULL`, returns `-1`.
	* Otherwise, returns the first index where `value` is located.

## 11. Advanced binary search
  * [104-advanced_binary.c](./104-advanced_binary.c): C function that searches
  for a value in a sorted array of integers using advanced binary search.
  * Assumes the array is sorted in ascending order.
  * If the value is not present or the array is `NULL`, returns `-1`.
	* Otherwise, returns the first index where `value` is located.

## 12. Jump search in a singly linked list
  * [105-jump_list.c](./105-jump_list.c): C function that searches for a value
  in a `listint_t` sorted singly linked list of integers using jump search.
  * Uses the square root of the list size as the jump step.
  * Assumes that the singly linked list is sorted in ascending order.
	* If the value is not present or the head of the list is `NULL`, returns `NULL`.
	* Otherwise, returns a pointer to the first node where `value` is located.

## 13. Linear search in a skip list
  * [106-linear_skip.c](./106-linear_skip.c): C function that searches for a value
  in a `skiplist_t` sorted skipped linked list of integers using jump search.
  * Assumes that the singly linked list is sorted in ascending order.
	* If the value is not present or the head of the list is `NULL`, returns `NULL`.
	* Otherwise, returns a pointer to the first node where `value` is located.

## 14. Big O
  * [107-O](./107-O): Text file containing the average time complexity of jump
  search in a singly linked list of size `n`, using `step = sqrt(n)`.

## 15. Big O
  * [108-O](./108-O): Text file containing the average time complexity of jump
  search in a sorted skipped linked list of of size `n`, using `step = sqrt(n)`.
