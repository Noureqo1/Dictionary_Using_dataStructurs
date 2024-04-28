#include <string>
#include <iostream>

using namespace std;

class Node {
public:
    string data;
    Node* next;

    Node(const string& data);
};

class LinkedList {
public:
    LinkedList();
    ~LinkedList();

    void insert(const string& data);
    int search(const string& word) const;
    int startsWith(const string& prefix) const;
    int EndsWith(const string& prefix) const;
    int Find(const string& prefix) const;

private:
    Node* head;
};

