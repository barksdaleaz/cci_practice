//
// Created by barks on 6/10/2021.
//
#include <iostream>
#include <unordered_map>
using namespace std;
// write code to remove duplicates from an unsorted linked list.
// how would you solve this problem if a temporary buffer is not allowed? <- haven't figured this part out

struct Node {
    int data;
    Node *next;
    Node *prev;
};
struct Node* head = nullptr;
int main() {

    // First-Glance Plan: create a data structure to hold values.
    // as soon as you come across a value that already exists,
    // delete that node.
    unordered_map<int, int> myMap;
    Node* curr = head;
    while(curr->next != nullptr) // or curr != nullptr??
    {
        // check to see if the value of the current node is in the map, if not:
       // insert the value of the current node into the map
       if(myMap.find(curr->data) != myMap.end())
       {
           // we DID find the data
           // we want to delete this node
           curr->prev->next = curr->next;
           curr->next->prev = curr->prev;

           // set curr's pointers to null (delete)
           curr->next = nullptr;
           curr->prev = nullptr;
       }
       myMap.insert({curr->data, 1});
    }

    return 0;
}
