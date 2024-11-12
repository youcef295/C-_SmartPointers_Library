#include "Book.hpp"

Book::Book(const string &title, const string &author, int pageCount) : LibraryItem(title, author), pageCount(pageCount)
{
}
void Book::display()
{
    LibraryItem::display();
    cout << "Nombre de pages: " << pageCount << endl;  
}