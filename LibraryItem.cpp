#include "LibraryItem.hpp"

LibraryItem::LibraryItem(const string &title, const string &author) : title(title), author(author)
{
}

void LibraryItem::display()
{
    cout << "Titre: " << title << endl;
    cout << "Author: " << author << endl;
}