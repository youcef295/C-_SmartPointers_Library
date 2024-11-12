#pragma once
#include <iostream>
#include "LibraryItem.hpp"

using namespace std;

class DVD : public LibraryItem
{
private:
    int duration;
public:
    DVD(const string &title, const string &author, int duration);
    void display() override;
};