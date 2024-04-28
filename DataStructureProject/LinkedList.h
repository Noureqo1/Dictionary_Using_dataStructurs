#include <string>
#include <vector>
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
    vector<string> startsWith(const string& prefix) const;
    vector<string> EndsWith(const string& prefix) const;
    vector<string> Find(const string& prefix) const;

private:
    Node* head;
};

