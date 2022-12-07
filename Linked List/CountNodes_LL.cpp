#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#include"Node.h"


//Iterative Meathod
int count(Node* p){
    int cnt=0;
    Node * temp=p;
    while(temp!=NULL){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
// TC : O(N)
// SC : O(1)



//Recursive Meathod
int count_rec(Node* p){
    int cnt=0;
    Node * temp=p;
    if(temp!=NULL){
        return cnt+=count_rec(temp->next);
    }
    return 0;
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
    int countNodes = count(p1);
    cout<<countNodes;
    
    return 0;
}