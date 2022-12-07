#include<iostream>
#include <bits/stdc++.h>
#include<climits>
#include<cmath>
using namespace std;
#include"Node.h"


void Delete(Node*head,int val){
    Node * p=head;
    Node * q=NULL;
    
    
    int x;
    if(head->data==val){
        Node *temp=head;
        head=head->next;
        delete temp;
    }
    else{
        while(p && p->data != val){
            q=p;
            p=p->next;
        }
        Node *temp=p;
        q->next=p->next;
        delete temp;
    }

}

void Display(Node* head){
    Node* tmp=head;
    while(tmp!=NULL){
        cout<<tmp->data<<" ";
        tmp=tmp->next;
    }
}


int main()
{
    Node * head = new Node;
    Node * p1 = new Node;
    Node * p2 = new Node;
    Node * p3 = new Node;
    Node * p4 = new Node;
    p1->data=10;
    p1->next=p2;
    head=p1;
    p2->data=20;
    p2->next=p3;
    p3->data=70;
    p3->next=p4;
    p4->data=80;
    p4->next=NULL;

    Display(head);
    Delete(head,70);
    cout<<endl;
    Display(head);
    
    return 0;
}