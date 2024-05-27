## Why use it instead of an simple array?

Arrays are expensive when performing insert and delete operations.

For example, when inserting an element at position 0, the array solution requires first itself to push the entire array down to one spot to make room and then, whereas deleting the first element requires shifting all the elements in the list up one.

So the worst case of these operations is O(n).

Because the running time for insertions and deletions is so slow and the list size must be known in advance, simple arrays are generally not used to implement lists.

## Linked Lists

1. Linked lists have items that are deacoplated. They are not necessary adjascent in memory.

2. Each structure contains the element itself and a pointer to a structure containing its successor.


