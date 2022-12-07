#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#include"Node.h"


int SumOfElements(Node*p1){
    Node*temp=p1;
    int sum=0;
    while(temp!=NULL){
        sum+=temp->data;
        temp=temp->next;
    }
    return sum;
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
    p3->data=30;
    p3->next=p4;
    p4->data=40;
    p4->next=NULL;
    int Sum = SumOfElements(p1);
    cout<<Sum;
    return 0;
}