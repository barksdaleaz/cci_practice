//
// Created by barks on 6/9/2021.
//
#include <iostream>

using namespace std;

int main()
{
    int arr[11] = {1,1,2,2,3,3,4,4,5,6,6};

    int val = 0;
    for(int i = 0; i < 11; i++)
    {
        val ^= arr[i];
        cout<<"Val: "<<val<<endl;
    }

    return 0;
}

