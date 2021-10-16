#pragma once
#include <list>
#include <algorithm>
#include <iostream>
using namespace std;

class HashTable {
private:
	list <int> * map;
	int size;
	int hash(int data) {
		return data % size;
	}
public:
	HashTable() {
		this->size = 10;
		map = new list <int>[this->size];
	}
	HashTable(int size) {
		this->size = size;
		map = new list <int>[this->size];
	}// constuctor with dynamic size
	~HashTable() {
		delete[] map;
	}// destructor, cleans up memory
	void insert(int data) {
		int bucket = hash(data);
		map[bucket].push_front(data);
	}// insert
	bool search(int data) {
		int bucket = hash(data);
		auto it = find(map[bucket].begin(), map[bucket].end(), data);
		if (it == map[bucket].end())
			return false;
		return true;
	}// search
	void print() {
		for (int i = 0; i < size; i++) {
			cout << i << ": "; 
			for (auto it = map[i].begin(); it != map[i].end(); it++) {
				cout << *it << " ";
			}// for 
			cout << endl;
		}// for
	}// print
	void remove(int data) {
		int bucket = hash(data);
		auto it = find(map[bucket].begin(), map[bucket].end(), data);
		if (it == map[bucket].end())
			return;
		map[bucket].erase(it);
	}// remove
};// HashTable class