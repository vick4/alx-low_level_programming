Project: More singly linked lists
QUESTIONs
Write a function that prints all the elements of a listint_t list.
Write a function that returns the number of elements in a linked listint_t list.
Write a function that adds a new node at the beginning of a listint_t list.
Write a function that adds a new node at the end of a listint_t list.
Write a function that frees a listint_t list.
Write a function that returns the nth node of a listint_t linked list.

Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
where index is the index of the node, starting at 0
if the node does not exist, return NULL
rite a function that deletes the node at index index of a listint_t linked list.

Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);
where index is the index of the node that should be deleted. Index starts at 0
Returns: 1 if it succeeded, -1 if it failed
