#include<iostream>
#include <bits/stdc++.h>
#include<climits>
#include<cmath>
using namespace std;
#include"Node.h"

//Iterative
int MaxElement(Node*p1){
    Node*temp=p1;
    int max=-1;
    while(temp!=NULL){
        if(temp->data>max){
                max=temp->data;
        }
        temp=temp->next;
        
    }
    return max;
}


//Recursive
int MaxElement_rec(Node*p1){
    int x=0;
    Node * temp=p1;
    if(temp==NULL){
        return -1;
    }
    
    x=MaxElement_rec(temp->next);
    return x>temp->data?x:temp->data;
        
    
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
    int Sum = MaxElement_rec(p1);
    cout<<Sum;
    return 0;
}