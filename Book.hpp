#pragma once
#include <iostream>
#include "LibraryItem.hpp"

using namespace std;

class Book : public LibraryItem
{
private:
    int pageCount;
public:
    Book(const string &title, const string &author, int pageCount);
    void display() override;
};