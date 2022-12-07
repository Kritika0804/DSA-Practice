#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#include"Node.h"

//Iterative Meathod
void Display(Node* p1){
    Node* temp=p1;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
// TC : O(N)
// SC : O(1)



//Recursive Meathod
void Display_rec(Node* p1){
    Node* temp=p1;
    if(temp!=NULL){
        cout<<temp->data<<" ";
        Display_rec(temp->next);
    }
}
// TC : O(N)
// SC : O(N) Since N+1 activation calls are made





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
    p3->data=30;
    p3->next=p4;
    p4->data=40;
    p4->next=NULL;
    Display(p1);
    
    return 0;
}