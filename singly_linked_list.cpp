#include<bits/stdc++.h>
#include<string>
using namespace std;

struct node
    {
        int data;
        node *next;
    };

    node *creat(int val){
        node* newnode = new node();
        newnode -> data = val;
        newnode -> next = nullptr;
        return newnode;
    }

int main()
{   
        node* head = creat(1);
        node* s = creat(2);
        node* t = creat(3);
        node* f = creat(4);
        head -> next = s;
        s -> next = t;
        t -> next = f;
        f -> next = nullptr;
        node* temp =head;
        while (temp != nullptr) {
        vac.push
        cout <<temp->data << " ";
        temp = temp->next;
        }
        
    
    
    return 0;
}