#include<bits/stdc++.h>
using namespace std;
typedef struct node {
    int val;
    struct node* next;
} node;
struct node* head=NULL;

struct node* build(int val) {
    struct node* newnode = (struct node*)malloc(sizeof(node));
    newnode->val=val;
    newnode->next=NULL;
}

void display() {
    node* tmp = head;
    cout << tmp->val;
    tmp=tmp->next;
    while(tmp!=NULL) {
        cout << ">" << tmp->val;
        tmp=tmp->next;
    }
}

void insertHead(int val) {
    node* newnode;
    newnode = (struct node*)malloc(sizeof(node));
    newnode->val=val;
    newnode->next=head;
    head=newnode;
}

void insertEnd(int val) {
    node* newnode;
    newnode = (struct node*)malloc(sizeof(node));
    newnode->val=val;
    newnode->next=NULL;
    if(head==NULL) head=newnode;
    else {
        node* tmp=head;
        while(tmp->next!=NULL) tmp=tmp->next;
        tmp->next=newnode;
    }
}

void insertAt(node* pre,int val) {
    node* newnode;
    newnode = (struct node*)malloc(sizeof(node));
    newnode->val=val;
    newnode->next=pre->next;
    pre->next=newnode;
}

void deleteHead() {
    head=head->next;
}

void deleteEnd() {
    node* tmp=head;
    while(tmp->next->next!=NULL) tmp=tmp->next;
    tmp->next=NULL;
}

void deleteMid(node* pre) {
    pre->next=pre->next->next;
}

bool search(int key) {
    node* tmp=head;
    while(tmp!=NULL) {
        if(tmp->val!=NULL) return true;
        tmp=tmp->next;
    }
    return false;
}

void sortLinkedList() {
    node* tmp=head;
    node* idx=NULL;
    if(head==NULL) return ;
    while(tmp!=NULL) {
        idx=tmp->next;
        while(idx!=NULL) {
            if(tmp->val>idx->val) swap(tmp->val,idx->val);
        }
        idx=idx->next;
    } 
    tmp=tmp->next;
}

int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        int a;
        cin >> a;
        if(i==n-1) insertAt(head,a);
        else insertEnd(a);
    }
    display();
}