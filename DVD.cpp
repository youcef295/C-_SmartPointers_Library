#include "DVD.hpp"

DVD::DVD(const string &title, const string &author, int duration) : LibraryItem(title, author), duration(duration)
{
}
void DVD::display()
{
    LibraryItem::display();
    cout << "Durée: " << duration << endl;  
}