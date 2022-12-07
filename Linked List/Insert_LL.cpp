#include<iostream>
#include <bits/stdc++.h>
#include<climits>
#include<cmath>
using namespace std;
#include"Node.h"


void Insert(Node*p1,int val,int indx){
    Node*p=p1;
   if(indx < 0){
        return;
   }
   Node* temp=new Node;
   temp->data=val;
   if(indx==0){
    temp->next=p;
    p=temp;
   }
   else{
    for(int i=0;i<indx-1;i++){
        p=p->next;
    }
    temp->next=p->next;
    p->next=temp;
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
    p2->data=70;
    p2->next=p3;
    p3->data=30;
    p3->next=p4;
    p4->data=40;
    p4->next=NULL;

    Display(p1);
    Insert(p1,60,2);
    Display(p1);
    
    return 0;
}