#include <iostream> 
using namespace std; 
  
// Representation of a node 
struct Node { 
    int data; 
    Node* next; 
}; 
  
// Function to insert node 
void insert(Node** root, int item) 
{ 
    Node* temp = new Node; 
    Node* ptr; 
    temp->data = item; 
    temp->next = NULL; 
  
    if (*root == NULL) 
        *root = temp; 
    else { 
        ptr = *root; 
        while (ptr->next != NULL) 
            ptr = ptr->next; 
        ptr->next = temp; 
    } 
} 
  
void display(Node* root) 
{ 
    while (root != NULL) { 
        printf("%d",root->data);
        if(root -> next!=NULL)  printf(" -> "); 
        root = root->next; 
    } 
    printf("\n");
} 
  
Node *arrayToList(int* arr, int n) 
{ 
    Node *root = NULL; 
    for (int i = 0; i < n; i++) 
        insert(&root, arr[i]); 
   return root; 
} 
  

  struct Node* mergeTwoLists(struct Node* list1, struct Node* list2) { 
    struct Node* dummy = (struct Node*)malloc(sizeof(struct Node));
    struct Node* current = dummy;

    while (list1 != NULL && list2 != NULL) {
        if (list1->data < list2->data) {
            current->next = list1;
            list1 = list1->next;
        } else {
            current->next = list2;
            list2 = list2->next; 
        }
        current = current->next;
        }

         if (list1 != NULL) {
        current->next = list1;
    } else {
        current->next = list2;
    }
    
    struct Node* result = dummy->next;
    free(dummy);
    return result;
}

// Driver code 
int main() 
{ 
    int arr1[] = { 1, 2, 4};
    int arr2[] ={1,3,4}; 
    int n = sizeof(arr1) / sizeof(arr1[0]); 
    Node* root1 = arrayToList(arr1, n); 
    Node *root2 = arrayToList(arr2,n);
    display(root1);
    display(root2);
    Node *start = mergeTwoLists(root1, root2);
    display(start); 
    while(start != NULL){
        struct Node *temp = start;
        start  = start -> next;
        free(temp);
    }
   
    return 0; 
}