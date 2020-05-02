# CPP_STL
All about  CPP STL


Containers library
  C++  Containers library 
The Containers library is a generic collection of class templates and algorithms that allow programmers to easily implement common data structures like queues, lists and stacks. There are three classes of containers -- sequence containers, associative containers, and unordered associative containers -- each of which is designed to support a different set of operations.
The container manages the storage space that is allocated for its elements and provides member functions to access them, either directly or through iterators (objects with properties similar to pointers).
Most containers have at least several member functions in common, and share functionalities. Which container is the best for the particular application depends not only on the offered functionality, but also on its efficiency for different workloads.

Sequence containers
========================
Sequence containers implement data structures which can be accessed sequentially.

array  
(C++11)
static contiguous array 
(class template)


vector 
dynamic contiguous array 
(class template)

deque 
double-ended queue 
(class template)

forward_list  
(C++11)
 
 
singly-linked list 
(class template)
list
 
doubly-linked list 
(class template)


Associative containers
===========================
Associative containers implement sorted data structures that can be quickly searched (O(log n) complexity).

set
collection of unique keys, sorted by keys 
(class template)

map 
collection of key-value pairs, sorted by keys, keys are unique 
(class template)

multiset 
collection of keys, sorted by keys 
(class template)

multimap 
collection of key-value pairs, sorted by keys 
(class template)

Unordered associative containers
======================================
Unordered associative containers implement unsorted (hashed) data structures that can be quickly searched (O(1) amortized, O(n) worst-case complexity).

unordered_set  
(C++11)
collection of unique keys, hashed by keys 
(class template)

unordered_map  
(C++11)
collection of key-value pairs, hashed by keys, keys are unique 
(class template)

unordered_multiset  
(C++11)
collection of keys, hashed by keys 
(class template)

unordered_multimap  
(C++11)
collection of key-value pairs, hashed by keys 
(class template)

Container adaptors
=========================
Container adaptors provide a different interface for sequential containers.

stack 
adapts a container to provide stack (LIFO data structure) 
(class template)

queue 
adapts a container to provide queue (FIFO data structure) 
(class template)

priority_queue 
adapts a container to provide priority queue 
(class template)

span
======
A span is a non-owning view over a contiguous sequence of objects, the storage of which is owned by some other object.

span  
(C++20)
a non-owning view over a contiguous sequence of objects 
(class template)
