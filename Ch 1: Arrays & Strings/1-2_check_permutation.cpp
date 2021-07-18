//
// Created by barks on 7/17/2021.
//
// Given two strings, write a method to decide if one is a permutation of the other.

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){

    // Plan: sort the strings so all letters are alphabetical.
    // compare letter by letter if they have the same letters.
//    string s1 = "tacocat";
//    string s2 = "atcocta";
    string s1 = "anthony";
    string s2 = "amanda";

    if(s1.length() != s2.length())
    {
        cout<<"The strings are not permutations of each other because they are different sizes."<<endl;
        return 0;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    bool isPermutation = true;
    for(int i = 0; i < s1.length(); i++)
    {
        if(s1[i] != s2[i])
        {
            isPermutation = false;
        }
    }

    if(isPermutation)
    {
        cout<<"The strings are permutations of each other."<<endl;
    }
    else
    {
        cout<<"The strings are not permutations of each other."<<endl;
    }
    return 0;
}



