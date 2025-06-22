#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        next = nullptr;
    }
};

class Stack{
public:
    Node* head;
    int s;

    Stack(){
        head=nullptr;
        s = 0;
    }

    void push(int val){
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        s++;
    }

    void printStack(){
        Node* temp  = head;
        while(temp){
            cout<<temp->val<<' ';
            temp = temp->next;
        }
    }

    int top(){
        if(s<=0){
            cout<<"Stack Under Flow\n";
            return INT_MIN;
        }
        return head->val;
    }

    void pop(){
        if(s>0){
            head = head->next;
            s--;
        }
        else{
            cout<<"Stack Under Flow \n";
            return;
        }
    }

    int size(){
        return s;
    }

    bool empty(){
        return s == 0;
    }


    
};

int main(){
    Stack st;
    cout<<st.empty()<<'\n';
    st.push(6);
    cout<<st.empty()<<'\n';
    st.push(8);
    cout<<st.size()<<'\n';
    st.push(89);
    st.push(7654);
    st.push(567);
    cout<<st.size()<<'\n';
    st.pop();
    cout<<st.size()<<'\n';

   
    st.printStack();
}