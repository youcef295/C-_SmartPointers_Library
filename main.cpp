#include <iostream>
#include "LibraryItem.hpp"
#include "Book.hpp"

using namespace std;
int main() 
{
    Book myBook("The Great Gatsby", "F. Scott Fitzgerald", 218);
    myBook.display();
    return 0;
}
