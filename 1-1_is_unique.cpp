//
// Created by barks on 6/9/2021.

#include <iostream>
#include <unordered_map>
#include <stdlib.h>
#include <algorithm>
using namespace std;

void useHashMap(string s);
void noDataStructure(string s);
int main()
{
    // implement an algorithm to determine if a string has all unique characters.

    // "First Glance Plan": iterate through string-array. throw all into a hash table
    // every time you come across a character, check hash table to see if it exists

    string a = "bacdefg";
    string b = "cabefge";

    useHashMap(a);
    useHashMap(b);

    // Extension: what if you cannot use additional data structures?
    // maybe cast all letters into integers, sort them, then xor them to see if anything cancels out.

    // this doesn't yet work because...
    // i can cast the char to its ASCII value
    // but i don't think I can override the "string" or "char"-ness
    // of the elements in the array
    // original goal was to convert all letters to numbers
    // sort, and then xor and if 0 pops up, that means there is a repeat number (letter)
    // but I think I'd need another array to store the converted numbers.

    // Without using data structures attempt 2: 7/17/2021
    // Sort the string
    // if any char is equal to the one after it, it is not unique.
    cout<<"Trying on A:"<<endl;
    noDataStructure(a);
    cout<<endl<<"Trying on B:"<<endl;
    noDataStructure(b);

    return 0;
}

void useHashMap(string s)
{
    unordered_map<char, int> map;
    bool itisUnique = true;
    for(int i = 0; i < s.length(); i++)
    {
        if(map.find(s[i]) != map.end())
        {
            itisUnique = false;
        }
        map.insert({s[i], 1});
    }

    if(itisUnique)
    {
        cout<<"String is fully unique."<<endl;
    }
    else
    {
        cout<<"String is not fully unique."<<endl;
    }

}

void noDataStructure(string s){
   sort(s.begin(), s.end());
   bool itisUnique = true;
   for(int i = 0; i < s.length(); i++)
   {
       if(s[i] == s[i+1])
       {
           itisUnique = false;
       }
   }

   if(itisUnique)
   {
       cout<<"String is comprised of all unique characters."<<endl;
   }
   else
   {
       cout<<"String is not fully unique."<<endl;
   }
}
