#include <bits/stdc++.h>
using namespace std;

/* Link list node */
class Node {
public:
    int data;
    Node* next;
    Node(int x) { data = x; }
};

/* See https:// www.geeksforgeeks.org/?p=3622 for details of
this function */
Node* SortedMerge(Node* first, Node* second)
{
    Node* result = NULL;

    /* Base cases */
    if (first == NULL)
        return (second);
    else if (second == NULL)
        return (first);

    /* Pick either a or b, and recur */
    if (first->data <= second->data) {
        result = first;
        result->next = SortedMerge(first->next, second);
    }
    else {
        result = second;
        result->next = SortedMerge(first, second->next);
    }
    return (result);
}

/* UTILITY FUNCTIONS */
/* Split the nodes of the given list into first and second
   halves, and return the two lists using the reference
   parameters. If the length is odd, the extra node should
   go in the first list. Uses the fast/slow pointer
   strategy. */
void splitList(Node* source, Node** firstRef,
               Node** secondRef)
{
    Node* slow = source;
    Node* fast = source->next;

    /* Advance 'fast' two nodes, and advance 'slow' one node
     */
    while (fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
    }

    /* 'slow' is before the midpoint in the list, so split
    it in two at that point. */
    *firstRef = source;
    *secondRef = slow->next;
    slow->next = NULL;
}

/* sorts the linked list by changing next pointers (not
 * data) */
void MergeSort(Node** headRef)
{
    Node* head = *headRef;
    Node* first;
    Node* second;

    /* Base case -- length 0 or 1 */
    if ((head == NULL) || (head->next == NULL)) {
        return;
    }

    /* Split head into 'first' and 'second' sublists */
    splitList(head, &first, &second);

    /* Recursively sort the sublists */
    MergeSort(&first);
    MergeSort(&second);

    /* answer = merge the two sorted lists together */
    *headRef = SortedMerge(first, second);
}

/* Function to print nodes in a given linked list */
void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}

/* Function to insert a node at the beginning of the linked
 * list */
void push(Node** head_ref, int new_data)
{
    /* allocate node */
    Node* new_node = new Node(new_data);

    /* link the old list of the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}

/* Driver program to test above functions*/
int main()
{
    /* Start with the empty list */
    Node* head = NULL;

    /* Let us create a unsorted linked lists to test the
        functions Created lists shall be a:
       2->3->20->5->10->15 */
    push(&head, 15);
    push(&head, 10);
    push(&head, 5);
    push(&head, 20);
    push(&head, 3);
    push(&head, 2);

    /* Sort the above created Linked List */
    MergeSort(&head);

    cout << "Sorted Linked List is: \n";
    printList(head);

    return 0;
}