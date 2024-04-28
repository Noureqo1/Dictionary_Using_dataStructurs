#include "LinkedList.h"
#include <iostream>

Node::Node(const string& data) {
    this->data = data;
    next = nullptr;
}
LinkedList::LinkedList() {
    head = nullptr;
}
LinkedList::~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
    head = nullptr;
}
void LinkedList::insert(const string& data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = newNode;
}
int LinkedList::search(const string& word) const {
    int index = 0;
    Node* current = head;
    while (current != nullptr) {
        if (current->data == word) {
            return index;
        }
        index++;
        current = current->next;
    }
    return -1;
}

int LinkedList::startsWith(const string& prefix) const
{
    LinkedList matching;
    Node* current = head;
    int count = 0;

    while (current != nullptr)
    {
        bool check = false;
        string word = current->data;

        for (int i = 0; i < prefix.length(); i++) 
        {
            
             // TEST
            // cout << word[i]<< " " << prefix[i] << endl;

            if (word[i] == prefix[i])
            {
                check = true;
            }
            else 
            {
                check = false;
                break;
            }
        }

        if (check)
        {
            cout << word << " Has the condition" << endl;
            matching.insert(word);
            count++;
        }
        // TEST
       // cout << "yeb \n";

        current = current->next;
    }

    return count;
}

int LinkedList::EndsWith(const string& prefix) const
{
    Node* current = head;
    int count = 0;



    while (current != nullptr)
    {
        LinkedList matching;
        bool check = false;

        string word = current->data;
        int i = word.length() - prefix.length();
        int y = 0;

        cout << i << endl;

        for (i ; i < word.length(); i++)
        {
            if (y >= prefix.length())
            {
                y = 0;
            }

             // TEST
            // cout << word[i] << " " << prefix[y] << endl;

            if (word[i] == prefix[y])
            {
                check = true;
                y++;

                 // TEST
                //cout << y << endl;
            }
            else
            {
                check = false;
                break;
            }
        }

        if (check)
        {
            cout << word << " Has the condition" << endl;
            matching.insert(word);
            count++;
        }

        // TEST
       // cout << "yeb \n";

        current = current->next;
    }

    return count;
}

int LinkedList::Find(const string& prefix) const
{
    LinkedList matching;
    Node* current = head;
    int count = 0;

    while (current != nullptr)
    {
        string word = current->data;
        int check = 0;

        int y = 0;
        int i = 0;

        for (i = 0; i <= word.length(); i++)
        {    
             // TEST
            cout << word[i] << " " << prefix[y] << endl;

            if (word[i] == prefix[y])
            {
                i = i;
                y++;

                check++;
            }
        }

        if (check == prefix.length()+1)
        {
            count++;
            matching.insert(word);
            cout << word << " Has the condition" << endl;
        }

         /*TEST*/
        cout << "yeb \n";

        current = current->next;
    }

    return count;
}

