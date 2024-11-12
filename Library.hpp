#pragma once
#include <iostream>
#include <memory>
#include <vector>

using namespace std;

template <typename T>
class Library
{
private:
    vector<shared_ptr<T>> elements;

public:
    void addItem(shared_ptr<T> item)
    {
        elements.push_back(item);
    }

    void displayItems()
    {
        for (const auto &element : elements)
        {   
            element->display();
            cout << "_______________________________________________________________" << endl;
        }
    }
};