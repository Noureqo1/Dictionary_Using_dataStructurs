#include <iostream>
#include "LinkedList.h"


void search(LinkedList list)
{
    string word;
    cout << "Enter the word to search: \n";
    cin >> word;

    int index = list.search(word);

    if (index != -1) {
        cout << word << " found at index " << index << endl;
    }
    else {
        cout << word << " not found in the list" << endl;
    }
}

void StartsWith(LinkedList list)
{
    string prefix;
    cout << "Enter the prefix to search: \n";
    cin >> prefix;

    int index = list.startsWith(prefix);

    if (index != 0) {
        cout << "number of words found in the list tat starts with " << prefix<< " is " << index << endl;
    }
    else {
        cout  << "no words found in the list tat starts with " << prefix << endl;
    }
}

void EndsWith(LinkedList list)
{
    string prefix;
    cout << "Enter the Ending to search: \n";
    cin >> prefix;

    int index = list.EndsWith(prefix);

    if (index != 0) {
        cout << "number of words found in the list tat Ends with " << prefix << " is " << index << endl;
    }
    else {
        cout << "no words found in the list tat Ends with " << prefix << endl;
    }
}


void Find(LinkedList list)
{
    string prefix;
    cout << "Enter the Keyword to find: \n";
    cin >> prefix;

    int index = list.Find(prefix);

    if (index != 0) {
        cout << "number of words that contains " << prefix << " is " << index << endl;
    }
    else {
        cout << "no words found that contains " << prefix << endl;
    }
}

void Display()
{
    cout << "choose one of the options below \n";
    cout << "Type (1) to Search \n";
    cout << "Type (2) to Search for words that starts with your keyword \n";
    cout << "Type (3) to Search for words that Ends with your keyword \n";
    cout << "Type (4) to Find for words contains your keyword \n";
}

int main() 
{
    LinkedList list;
    list.insert("apple");
    list.insert("banana");
    list.insert("orange");
    list.insert("grape");
    list.insert("avocado");

    Display();

    int choise;
    cin >> choise;

    switch (choise)
    {
    case 1:
        search(list);
        break;

    case 2:
        StartsWith(list);
        break;
    case 3:
        EndsWith(list);
        break;
    case 4:
        Find(list);
        break;
    default:
        cout << "::Invalid input::";
            break;
    }


}
