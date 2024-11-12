#pragma once
#include <iostream>

using namespace std;

class LibraryItem
{
protected:
    string title, author;

public:
    LibraryItem(const string &title, const string &author);
    virtual void display();
};