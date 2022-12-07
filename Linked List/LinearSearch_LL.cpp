#include<iostream>
#include <bits/stdc++.h>
#include<climits>
#include<cmath>
using namespace std;
#include"Node.h"

//Iterative with move to head meathod in linear search
Node* LinearSearch(Node*p1,int key){
    Node *p=new Node;
    p=p1;
    Node *q=new Node;
    q=NULL;
    while(p!=NULL){
        if(key==p->data){
            q->next=p->next;
            p->next=p1;
            p1=p;
            return p;
        }
        p=q;
        p=p->next;
    }
    return NULL;
}

void Display(Node* p1){
    Node* temp=p1;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main()
{
    Node * p1 = new Node;
    Node * p2 = new Node;
    Node * p3 = new Node;
    Node * p4 = new Node;
    p1->data=10;
    p1->next=p2;
    p2->data=70;
    p2->next=p3;
    p3->data=30;
    p3->next=p4;
    p4->data=40;
    p4->next=NULL;

    Node* tmp=new Node;
    tmp=LinearSearch(p1,40);
    if(tmp!=NULL){
        cout<<"Element found "<<tmp->data;

    }
    else{
        cout<<"Not found";
    }

    Display(p1);
    
    return 0;
}