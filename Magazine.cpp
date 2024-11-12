#include "Magazine.hpp"

Magazine::Magazine(const string &title, const string &author, int issueNumber) : LibraryItem(title, author), issueNumber(issueNumber)
{
}
void Magazine::display()
{
    LibraryItem::display();
    cout << "Durée: " << issueNumber << endl;  
}