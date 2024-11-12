#include <iostream>
#include "LibraryItem.hpp"
#include "Book.hpp"
#include "Magazine.hpp"
#include "DVD.hpp"
#include "Library.hpp"

using namespace std;
int main()
{
    Library<Book> bookLibrary;
    Library<Magazine> magazineLibrary;
    Library<DVD> dvdLibrary;

    bookLibrary.addItem(make_shared<Book>("1984", "George Orwell", 328));
    bookLibrary.addItem(make_shared<Book>("To Kill a Mockingbird", "Harper Lee", 281));

    dvdLibrary.addItem(make_shared<DVD>("Inception", "Christopher Nolan", 148));
    dvdLibrary.addItem(make_shared<DVD>("The Matrix", "The Wachowskis", 136));

    magazineLibrary.addItem(make_shared<Magazine>("National Geographic", "Various", 2023));
    magazineLibrary.addItem(make_shared<Magazine>("Science", "Various", 2045));

    cout << "Books in Library:" << endl;
    bookLibrary.displayItems();

    cout << "\nDVDs in Library:" << endl;
    dvdLibrary.displayItems();

    cout << "\nMagazines in Library:" << endl;
    magazineLibrary.displayItems();
    return 0;
}
