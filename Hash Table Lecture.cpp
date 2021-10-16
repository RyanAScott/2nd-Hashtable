// Hash Table Lecture.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This is an example from a lecture on hash tables
// Collisions are resolved through chaining

#include <iostream>
#include "HashTable.hpp"
using namespace std;
int main(int argc, const char * argv[])
{
    HashTable ht;
    ht.insert(10);
    ht.insert(33);
    ht.insert(34);
    ht.insert(53);
    //cout << ht.search(33) << endl;
    //cout << ht.search(55) << endl;
    ht.print();
    ht.remove(33);
    ht.print();
    return 0;
}

