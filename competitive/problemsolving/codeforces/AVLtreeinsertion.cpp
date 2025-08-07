#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

struct Node {
    Node *leftchild;
    Node *rightchild;
    int data;
    int height;
} *root = nullptr;

int Height(struct Node  *pot){
    if(pot == NULL )
        return 1;//considering tree heigth to be 1 for one node
    int hl = pot && pot -> leftchild?(pot -> leftchild ->height):0;
    int hr = pot && pot -> rightchild?(pot -> rightchild -> height) : 0;
    return hl > hr ? hl+1 : hr+1;
}

int BalanceFactor(struct Node * p){
    return Height(p->leftchild) - Height(p -> rightchild);
}


struct Node* LLrotation(struct Node *p){

    struct Node *pl = p ->leftchild;
    struct Node *plr = pl -> rightchild;
    pl -> rightchild = p;
    p -> leftchild = plr;
    if(root == p){
        root = pl;
    }
    return root;
}
Node *Rinsert(struct Node *p, int val){
    if(p == NULL){
        p = (struct Node *) malloc(sizeof(struct Node));
        p -> data = val;
        p -> leftchild = p->rightchild = nullptr;
        p -> height = 1;
        root = p;
        return p;
    }
    else if(p -> data > val){
        p -> rightchild = Rinsert(p->rightchild, val);
    }
    else if(p->data < val){
        p -> leftchild = Rinsert(p->leftchild, val);
    }
    p -> height = Height(p);
    if(BalanceFactor(p) == 2 && BalanceFactor(p->leftchild) == 1){
        return LLrotation(p);
    }
    else if(BalanceFactor(p) == -2 && BalanceFactor(p -> rightchild) == -1){
        // return RRrotation(p);
        return NULL;
    }
    else if(BalanceFactor(p) == 2 && BalanceFactor(p -> leftchild) == -1){
        // return LRrotation(p);
        return NULL;
    }
    else if(BalanceFactor(p) == -2 && BalanceFactor(p->rightchild) == 1){
        // return RLrotation(p);
        return NULL;
    }
    
    return p;
}



int main(){
    struct Node *temp = Rinsert(root,10);
    temp = Rinsert(root , 5);
    temp = Rinsert(root , 2);
    return 0;
}