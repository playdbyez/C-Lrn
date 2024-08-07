            ################## :: LINKED LIST :: ####################

> A container structure that relies hevily on mallocing space for the Node structure instances.

> Classed as a self-referring structure since it relies on the name given to the 'typedef struct' definition

> Nodes are sequenced in a non-contiguous way.
(memory locations for each node is not in order, as this structure relies on Heap memory )

> A linked list's size is very flexible and they're useful for frequent insert & delete operations.

> Advantageous on large lists where any one node can be deleted at any position 

> Linked lists can follow a variety of structures to determine its sequence, including:
  - Doubly linked list (bidirectional, each node points to two other nodes)
  - Singly linked list (unidirectional, each node points to a single other node)

> Deleting a node however, requires linking the node that comes after,
  to the node that comes before the node being removed, in order to maintain its structure.
  
> Compared to a contiguous memory region known as an array, linked lists take less operations to
  manage and delete characters/nodes and maintain its structure whereas arrays take more work.
  In a doubly linked list for example, deleting a node usually takes 4 operations while an array may require way more.

> Doubly linked list structures are similar to binary tree structures, binary trees prefeer to focus 
  more heavily in the sorting of its values based on the root value
  whereas linked lists don't care much about sorting, aside of maintining a fixed "head" and "tail" of the list. 

> One major limitation with Linked lists relates to the searching method, since searching for a particular node requires
  iterating through every node in the list, in this aspect a simple binary search tree is superior.
  
 
