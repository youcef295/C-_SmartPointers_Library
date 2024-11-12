#pragma once
#include <iostream>
#include "LibraryItem.hpp"

using namespace std;

class Magazine : public LibraryItem
{
private:
    int  issueNumber;
public:
    Magazine(const string &title, const string &author, int  issueNumber);
    void display() override;
};