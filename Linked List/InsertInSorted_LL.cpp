#include<iostream>
#include <bits/stdc++.h>
#include<climits>
#include<cmath>
using namespace std;
#include"Node.h"


void InsertInSorted(Node*head,int val){
    Node*p=head;
    Node*q=NULL;
    Node* temp=new Node;
    temp->data=val;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
    }
    else{
        while(p && p->data<val){
            q=p;
            p=p->next;
        }
        if(p==head){
            temp->next=head;
            head=temp;
        }
        else{
            temp->next=q->next;
            q->next=temp;
        }
    }
   

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
    p2->data=20;
    p2->next=p3;
    p3->data=70;
    p3->next=p4;
    p4->data=80;
    p4->next=NULL;

    Display(p1);
    InsertInSorted(p1,40);
    cout<<endl;
    Display(p1);
    
    return 0;
}